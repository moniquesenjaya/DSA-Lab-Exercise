#include "queue_linked.h"

int main()
{
	int val, option;
	Queue myqueue;
	system("cls"); 		// belongs to stdlib.h
	do
	{
		cout << "\n *****MAIN MENU*****";
		cout << "\n 1. INSERT (ENQUEUE))";
		cout << "\n 2. DELETE (DEQUEUE))";
		cout << "\n 3. PEEK";
		cout << "\n 4. DISPLAY";
		cout << "\n 5. EXIT";
		cout << "\n Enter your option : ";
		cin >> option;
		switch(option)
		{
		case 1:
				cout << "\n Enter the number to insert in the queue:";
				cin >> val;
				myqueue.q = myqueue.insert(val);
				break;
		case 2:
				myqueue.q = myqueue.delete_element();
				break;
		case 3:
				val = myqueue.peek();
				if(val != -1)
					cout << "\n The value at front of queue is : " << val;
				break;
		case 4:
				myqueue.q = myqueue.display();
				break;
		}
	}while(option != 5);

	return 0;
}
/*
Output
*****MAIN MENU*****
1. INSERT (ENQUEUE)
2. DELETE (DEQUEUE)
3. PEEK
4. DISPLAY
5. EXIT
Enter your option : 3
QUEUE IS EMPTY
Enter your option : 5
*/
