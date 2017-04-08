#include <iostream>
#include "linkedList.h"
using namespace std;

void main() {

	int numberOfNodes, i, temp;
	List<int>* lst = new List<int>;

	temp = 999;
	cout << "Plese enter numbers (at the end enter 999): " << endl;

	cin >> temp;
	while (temp != 999) {
		lst->insertNode(temp);
	}

	cout << "My list: ";
	lst->printList();
	lst->Find2MaxNumbers();
}