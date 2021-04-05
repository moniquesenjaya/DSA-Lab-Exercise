// Closed Hashing
// a program to show searching using closed hashing.
#include <iostream>
#include <cstdlib>
#include "hash.cpp"
using namespace std;

int main()
{
	int option;
	//clrscr();
	system("cls"); 		// belongs to stdlib.h
	ClosedHashtable table;


	do
	{
		cout <<  "\n MENU \n1.Insert \n2.Search \n3.Delete \n4.Display \n5.Exit";
		cout <<  "\nEnter your option: ";
		cin >> option;
		switch (option)
		{
			case 1:
					table.insert_val();
					break;
			case 2:
					table.search_val();
					break;
			case 3:
					table.delete_val();
					break;
			case 4:
					table.display();
					break;
			default:
					cout <<  "\nInvalid choice entry!!!\n";
					break;
		}
	}while (option!=5);

	return 0;
}
/*
Output
MENU
1. Insert
2. Search
3. Delete
4. Display
5. Exit
Enter your option: 1
Enter the element to be inserted :1
Enter your option: 4
1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Enter your option: 5
*/
