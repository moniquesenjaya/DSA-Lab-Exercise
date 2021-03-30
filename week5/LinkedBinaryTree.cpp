#include <iostream>
#include <list>
#include "LinkedBinaryTree.h"

using namespace std;

// constructor
LinkedBinaryTree::LinkedBinaryTree() : root(nullptr), n(0) { } 

// number of nodes
int LinkedBinaryTree::size() const 
{ 
	return n; 
} 

// is tree empty?
bool LinkedBinaryTree::empty() const 
{ 
	return size() == 0; 
} 

// get the root
Position LinkedBinaryTree::getRoot() const 
{ 
	return Position( root); 
} 

// add root to empty tree
void LinkedBinaryTree::addRoot() 
{ 
	root = new Node; 
	n = 1; 
}

// expand external node
void LinkedBinaryTree::expandExternal(const Position& p) 
{ 
	Node* v = p.v; // p�s node
	v->left = new Node; // add a new left child
	v->left->par = v; // v is its parent
	v->right = new Node; // and a new right child
	v->right->par = v; // v is its parent
	n += 2; // two more nodes
}

// remove p and parent
Position LinkedBinaryTree::removeAboveExternal(const Position& p) 
{ 
	Node* w = p.v; 
	Node* v = w->par; // get p�s node and parent
	Node* sib = (w == v->left ? v->right : v->left);
	
	// child of root?
	if (v == root) { 
		root = sib; // . . .make sibling root
		sib->par = nullptr;
	}else { 
		Node* gpar = v->par; // w�s grandparent
		if (v == gpar->left) 
			gpar->left = sib; // replace parent by sib
		else 
			gpar->right = sib;
		
		sib->par = gpar;
	}
	
	delete w; 
	delete v; // delete removed nodes
	n -= 2; // two fewer nodes
	
	return Position(sib);
}

// list of all nodes
PositionList LinkedBinaryTree::positions(int order) const 
{ 
	PositionList pl;
	switch(order){
		case 1:		
			preorder( root, pl); // preorder traversal
			break;
		case 2:		
			inorder( root, pl); // inorder traversal
			break;
		case 3:		
			postorder( root, pl); // postorder traversal
			break;
		default:
			cout << "wrong order..." << endl;
			break;
	}
	
	return PositionList(pl); // return resulting list
	//return pl; // return resulting list
} 

// preorder traversal
void LinkedBinaryTree::preorder(Node* v, PositionList& pl) const 
{ 
	pl.push_back(Position(v)); // add this node
	if (v->left != nullptr) // traverse left subtree
		preorder(v->left, pl);

	if (v->right != nullptr) // traverse right subtree
		preorder(v->right, pl);
}

// inorder traversal
void LinkedBinaryTree::inorder(Node* v, PositionList& pl) const 
{ 
	if(v->left != nullptr){
		inorder(v -> left, pl);
	}
	pl.push_back(Position(v));
	if(v->right != nullptr){
		inorder(v -> right, pl);
	}
}


// postorder traversal
void LinkedBinaryTree::postorder(Node* v, PositionList& pl) const 
{ 
	// your code
	if(v->left != nullptr){
		postorder(v -> left, pl);
	}
	
	if(v->right != nullptr){
		postorder(v -> right, pl);
	}
	
	pl.push_back(Position(v));
	
}



