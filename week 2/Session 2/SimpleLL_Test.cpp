#include <iostream>
#include <string>
#include "SimpleLL.h"
using namespace std;


int main()
{
	int data;
 	SimpleLL myList;
	SimpleLL::NODE* ptr;

	// add
	ptr = myList.initNode(20);
	myList.addNode(ptr);
	ptr = myList.initNode(30);
	myList.addNode(ptr);
	ptr = myList.initNode(40);
	myList.addNode(ptr);
	ptr = myList.initNode(50);
	myList.addNode(ptr);
	ptr = myList.initNode(60);
	myList.addNode(ptr); 
	myList.displayList(myList.head);

    // delete
	data = 40;
	ptr = myList.search( myList.head, data);
	if( ptr == NULL ) {
		cout << "\nData: " << data << " not found" << endl;
	}
	else {
		cout << "\nDeleting a node ...  ";
	    myList.displayNode(ptr);
		myList.deleteNode( ptr );
	}
	myList.displayList(myList.head);

    // insert
	data = 40;
	ptr = myList.initNode( data );
	myList.insertNode( ptr );
	cout << "\nInserting a node ...  ";
	myList.displayNode(ptr);
	myList.displayList(myList.head);
    
}