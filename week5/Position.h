#ifndef _POSITION
#define _POSITION

#include <list>
#include "Node.h"
using namespace std;

// position of a node in the tree
// Note that since the function body is short, 
// they're made inline within the class declaration
class Position { 
	//private:
	public:
		Node* v; // pointer to the node
	
	public:
		// constructor
		Position(Node* v = nullptr) : v( v) { } 
		
		// get element
		Elem& operator*() 
		{ 
			return v->elt; 
		} 
		
		// get left child
		Position left() const 
		{ 
			return Position(v->left); 
		} 
		
		// get right child
		Position right() const 
		{ 
			return Position(v->right); 
		} 
		
		// get parent
		Position parent() const 
		{ 
			return Position(v->par); 
		} 
		
		// root of the tree?
		bool isRoot() const 
		{ 
			return v->par == nullptr; 
		} 
		
		// an external node?
		bool isExternal() const 
		{ 
			return v->left == nullptr && v->right == nullptr; 
		} 
		
	friend class LinkedBinaryTree; // give tree access
};

typedef list<Position> PositionList; // list of positions


#endif
