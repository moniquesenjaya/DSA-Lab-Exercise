// Hedder for a Binary Search Tree (BST)

#ifndef _BINARY_SEARCH_TREE
#define _BINARY_SEARCH_TREE
#include "node.h"

class BST
{
public:
	node *root; // pointer to the root node

public:
	// constructor
	BST();

	// key operations for a BST
	void insertElement(int);
	void preorderTraversal(node *);
	void inorderTraversal(node *);
	void postorderTraversal(node *);
	bool searchElement(node *, int); // to be implemented later
	void deleteElement(int);
	node *deleteTree(node *);	

	// utility operations for a BST
	node *findSmallestElement(node *);
	node *findLargestElement(node *);
	int totalNodes(node *);
	int totalExternalNodes(node *);
	int totalInternalNodes(node *);
	int Height(node *);
};

#endif


