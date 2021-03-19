#include "queue_array.h"

int main()
{
	int option, val;
	Queue q;
	do
	{
		cout << "\n\n ***** MAIN MENU *****";
		cout << "\n 1. Insert (enqueue) an element";
		cout << "\n 2. Delete (dequeue) an element";
		cout << "\n 3. Peek";
		cout << "\n 4. Display the queue";
		cout << "\n 5. EXIT";
		cout << "\n Enter your option : ";
		cin >> option;

		switch(option)
		{
			case 1:
					int num;
					cout << "\n Enter the number to be inserted in the queue : ";
					cin >> num;
					q.insert(num);
					break;
			case 2:
					val = q.delete_element();
					if (val != -1)
						cout << "\n The number deleted is : " << val;
					break;
			case 3:
					val = q.peek();
					if (val != -1)
						cout << "\n The first value in queue is : " << val;
					break;
			case 4:
					q.display();
					break;
		}
	}while(option != 5);

	return 0;
}
/*
Output
***** MAIN MENU *****"
1. Insert (enqueue) an element
2. Delete (dequeue) an element
3. Peek
4. Display the queue
5. EXIT
Enter your option : 1
Enter the number to be inserted in the queue : 50
*/


