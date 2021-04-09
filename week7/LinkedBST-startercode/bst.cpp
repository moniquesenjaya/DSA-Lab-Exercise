// Binary Search Tree (BST) Implementation
#include <iostream>
#include <cstdlib>
#include "bst.h"
using namespace std;

BST::BST(){
	root = nullptr;
}

void BST::insertElement(int val)
{
	node *ptr, *nodeptr, *parentptr;
	ptr = new node;
	ptr->data = val;
	ptr->left = nullptr;
	ptr->right = nullptr;
	if(root==nullptr)
	{
		root=ptr;
		root->left=nullptr;
		root->right=nullptr;
	}
	else
	{
		parentptr=nullptr;
		nodeptr=root;
		while(nodeptr!=nullptr)
		{
			parentptr=nodeptr;
			if(val<nodeptr->data)
				nodeptr=nodeptr->left;
			else
				nodeptr = nodeptr->right;
		}
		if(val<parentptr->data)
			parentptr->left = ptr;
		else
			parentptr->right = ptr;
	}
}

void BST::preorderTraversal(node* root)
{
	if(root != nullptr)
	{
		cout << "\t" << root->data;
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}

void BST::inorderTraversal(node *root)
{
	if(root != nullptr)
	{
		inorderTraversal(root->left);
		cout << "\t" << root->data;
		inorderTraversal(root->right);
	}
}

void BST::postorderTraversal(node *root)
{
	if(root != nullptr)
	{
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		cout << "\t" << root->data;
	}
}

// BST search function to be implemented

bool BST::searchElement(node* root, int val){
	if(root != nullptr)
	{
		if (val == root->data)
			return true;
		else if (val < root->data)
			if (root -> left == nullptr)
				return false;
			else
				return searchElement(root -> left, val);
		else if (val > root->data)
			if (root -> right == nullptr)
				return false;
			else
				return searchElement(root -> right, val);
	}
	else
		return false;
}



node* BST::findSmallestElement(node *root)
{
	if( (root == nullptr) || (root->left == nullptr))
		return root;
	else
		return findSmallestElement(root ->left);
}

node* BST::findLargestElement(node *root)
{
	if( (root == nullptr) || (root->right == nullptr))
		return root;
	else
		return findLargestElement(root->right);
}

void BST::deleteElement(int val)
{
	node *cur, *parent, *suc, *psuc, *ptr;
	if(root->left==nullptr)
	{
		cout << "\n The tree is empty ";
	}
	parent = root;
	cur = root->left;
	while(cur!=nullptr && val!= cur->data)
	{
		parent = cur;
		cur = (val<cur->data)? cur->left:cur->right;
	}
	if(cur == nullptr)
	{
		cout << "\n The value to be deleted is not present in the tree";
	}
	if(cur->left == nullptr)
		ptr = cur->right;
		else if(cur->right == nullptr)
		ptr = cur->left;
	else
	{
		// Find the in-order successor and its parent
		psuc = cur;
		cur = cur->left;
		while(suc->left!=nullptr)
		{
			psuc = suc;
			suc = suc->left;
		}
		if(cur==psuc)
		{
			// Situation 1
			suc->left = cur->right;
		}
		else
		{
			// Situation 2
			suc->left = cur->left;
			psuc->left = suc->right;
			suc->right = cur->right;
		}
		ptr = suc;
	}
	// Attach ptr to the parent node
	if(parent->left == cur)
		parent->left=ptr;
	else
		parent->right=ptr;

	delete cur;
}

int BST::totalNodes(node *root)
{
	if(root==nullptr)
		return 0;
	else
		return(totalNodes(root->left) + totalNodes(root->right) + 1);
}

int BST::totalExternalNodes(node *root)
{
	if(root==nullptr)
		return 0;
	else if((root->left==nullptr) && (root->right==nullptr))
		return 1;
	else
		return (totalExternalNodes(root->left) + totalExternalNodes(root->right));
}

int BST::totalInternalNodes(node *root)
{
	if( (root==nullptr) || ((root->left==nullptr) && (root->right==nullptr)))
		return 0;
	else
		return (totalInternalNodes(root->left) + totalInternalNodes(root->right) + 1);
}

int BST::Height(node *root)
{
	int leftheight, rightheight;
	if(root==nullptr)
		return 0;
	else
	{
		leftheight = Height(root->left);
		rightheight = Height(root->right);

		if(leftheight > rightheight)
			return (leftheight + 1);
		else
			return (rightheight + 1);
	}
}

node* BST::deleteTree(node *root)
{
	if(root!=nullptr)
	{
		deleteTree(root->left);
		deleteTree(root->right);
		delete root;
	}
}


