// Testing the operations of a Binary Search Tree (BST) Implementation
#include <iostream>
#include <cstdlib>
#include "bst.cpp"
using namespace std;

int main()
{
	int option, val;
	node *ptr;
	BST bst;
	//clrscr();
	system("cls"); 		// belongs to cstdlib
	do
	{
		cout << "\n\n ******MAIN MENU******* \n";
		cout << "\n 1. Insert Element";
		cout << "\n 2. Preorder Traversal";
		cout << "\n 3. Inorder Traversal";
		cout << "\n 4. Postorder Traversal";
		cout << "\n 5. Find the smallest element";
		cout << "\n 6. Find the largest element";
		cout << "\n 7. Delete an element";
		cout << "\n 8. Count the total number of nodes";
		cout << "\n 9. Count the total number of external nodes";
		cout << "\n 10. Count the total number of internal nodes";
		cout << "\n 11. Determine the height of the tree";
		cout << "\n 12. Search for an element in the tree";
		cout << "\n 13. Delete the tree";
		cout << "\n 14. Exit";
		cout << "\n\n Enter your option : ";
		cin >> option;
		switch(option)
		{
			case 1:
					cout << "\n Enter the value of the new node : ";
					cin >> val;
					bst.insertElement(val);
					break;
			case 2:
					cout << "\n The elements of the tree are : \n";
					bst.preorderTraversal(bst.root);
					break;
			case 3:
					cout << "\n The elements of the tree are : \n";
					bst.inorderTraversal(bst.root);
					break;
			case 4:
					cout << "\n The elements of the tree are : \n";
					bst.postorderTraversal(bst.root);
					break;
			case 5:
					ptr = bst.findSmallestElement(bst.root);
					cout << "\n Smallest element is : " << ptr->data;
					break;
			case 6:
					ptr = bst.findLargestElement(bst.root);
					cout << "\n Largest element is : " << ptr->data;
					break;
			case 7:
					cout << "\n Enter the element to be deleted : ";
					cin >> val;
					bst.deleteElement(val);
					break;
			case 8:
					cout << "\n Total no. of nodes = " << bst.totalNodes(bst.root);
					break;
			case 9:
					cout << "\n Total no. of external nodes = " <<
					bst.totalExternalNodes(bst.root);
					break;
			case 10:
					cout << "\n Total no. of internal nodes = " << 
					bst.totalInternalNodes(bst.root);
					break;
			case 11:
					cout << "\n The height of the tree = " << bst.Height(bst.root);
					break;
			case 12:
				{
					cout << "\n Enter the element to be searched : ";
					cin >> val;
					bool found = bst.searchElement(bst.root, val);
					if(found)
						cout << "Item " << val << " is found.";
					else
						cout << "Item not found.";
					break;
				}
			case 13:
					bst.root = bst.deleteTree(bst.root);
					break;
		}
	}while(option!=14);

	return 0;
}


/*
Output
*******MAIN MENU*******
1. Insert Element
2. Preorder Traversal
3. Inorder Traversal
4. Postorder Traversal
5. Find the smallest element
6. Find the largest element
7. Delete an element
8. Count the total number of nodes
9. Count the total number of external nodes
10. Count the total number of internal nodes
11. Determine the height of the tree
12. Search for an element in the tree
13. Delete the tree
14. Exit
Enter your option : 1
Enter the value of the new node : 12
Enter the value of the new node : 4
Enter the value of the new node : 20
Enter your option : 2
12 4 20
Enter your option : 14	
*/
