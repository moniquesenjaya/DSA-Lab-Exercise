#ifndef _NODE
#define _NODE

#include <iostream>
using namespace std;

// the type of data field (elt) of a node of the tree
typedef string Elem;

// a node of the tree
struct Node { 
	Elem elt; // element value
	Node* par; // parent
	Node* left; // left child
	Node* right; // right child
	// constructor
	Node() : elt(), par(nullptr), left(nullptr), right(nullptr) { } 
};

#endif
