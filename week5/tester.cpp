#include <iostream>
#include <list>
#include "LinkedBinaryTree.cpp"

using namespace std;

int main()
{
	list<Position> poslist;
	
	// create object of a Binary Tree
	LinkedBinaryTree lbt;

	// build the tree and assign the data in each node
	/*
			"Taylor Swift"
	 			   |
				 |	 | 
			   |       | 
	"Billie Eilish"  "Beyonce"
		       |
			 |   \
		   |       \
		 |           \
	"Ed Sheeran"  "John Legend"
	
	*/
	
	lbt.addRoot();
	Position proot = lbt.getRoot();
	proot.v->elt = "Taylor Swift";

	lbt.expandExternal(proot);
	Position b = proot.left();
	b.v->elt = "Billie Eilish";
	Position p = proot.right();
	p.v->elt = "Beyonce";
	
	lbt.expandExternal(b);
	Position a = b.left();
	a.v->elt = "Ed Sheeran";
	Position j = b.right();
	j.v->elt = "John Legend";
	
	
	// check the size of the tree
	cout << " Size of the Tree is " << lbt.size() << endl;

	// execute pre-order traversal which is called via positions function
	PositionList pl = lbt.positions(1); // argument value 1 means pre-order traversal
	cout << " Preorder traversal:" << endl;
	for(Position pos:pl){
		cout << "\t" << *pos << endl;
	}
	cout << endl;	
	
	
	// PLEASE UNCOMMENT THESE LINES WHEN YOU'VE DONE IMPLEMENTING THE INORDER
	// AND POSTORDER TRAVERSAL FUNCTION
	pl = lbt.positions(2); // argument value 2 means in-order traversal
	
	cout << " Inorder traversal:" << endl;
	for(Position pos:pl){
		cout << "\t" << *pos << endl;
	}
	cout << endl;
	
	pl = lbt.positions(3); // argument value 3 means in-order traversal

	cout << " Postorder traversal:" << endl;
	for(Position pos:pl){
		cout << "\t" << *pos << endl;
	}
	

	return 0;	
}

