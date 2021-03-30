#ifndef _LINKED_BINARY_TREE
#define _LINKED_BINARY_TREE

#include <iostream>
#include <list>
#include "Node.h"
#include "Position.h"

using namespace std;

// a Binary Tree implemented using Linked data structure
class LinkedBinaryTree { 
	public:
		LinkedBinaryTree(); // constructor
		int size() const; // number of nodes
		bool empty() const; // is tree empty?
		Position getRoot() const; // get the root
		PositionList positions(int) const; // list of nodes in accordance to traversal order
		void addRoot(); // add root to empty tree
		void expandExternal(const Position& p); // expand external node
		Position removeAboveExternal(const Position& p); // remove p and parent
		void preorder(Node* v, PositionList& pl) const; // preorder utility 
		void inorder(Node* v, PositionList& pl) const; // inorder utility
		void postorder(Node* v, PositionList& pl) const; // postorder utility
		// NOTE: housekeeping functions such as destructor, copy constructor and 
		// assignment operator are omitted
	
	private:
		Node* root; // pointer to the root
		int n; // number of nodes
};

#endif
