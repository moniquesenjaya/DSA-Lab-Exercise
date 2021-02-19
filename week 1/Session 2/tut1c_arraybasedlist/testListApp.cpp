#include <iostream>
#include "arrayList.h"

using namespace std;

int main(){
	// variable declaration
	int num;
	cout << "Enter any integer: ";
	cin >> num;
	
	// create a List
	createList(10);
	
	cout << "list capacity " << listCapacity() << endl;
	cout << "list size " << listSize() << endl;
	
	
	// insert the integer to the list
	insert(num);
	
	// print the element of the list
	print();
	
}

