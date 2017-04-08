#include "linkedList.h"

void main() {

	LinkedList* lst;
	int numberOfNodes, i, temp;

	cout << endl << "Question 1:" << endl;
	cout << "Please enter number of nodes (minimum 2): ";
	cin >> numberOfNodes;

	if (numberOfNodes <= 1) {
		cout << "ERROR: less then 2 nodes " << endl;
		return;
	}

	lst = new LinkedList(numberOfNodes);


	cout << "Plese enter " << numberOfNodes << " numbers: " << endl;

	for (i = 0; i < numberOfNodes; i++) {
		cin >> temp;
		lst->InsertNode(temp);
	}

	cout << "My list: ";
	lst->PrintList();
	lst->Find2MaxNumbers();
}