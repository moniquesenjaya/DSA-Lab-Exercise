// Queue
// a program to implement a linked queue.
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

struct queue
{
	node* front;
	node* rear;
};

class Queue
{
public:
	queue* q;
	
	Queue();
	void create_queue();
	queue* insert(int);
	queue* delete_element();
	queue* display();
	int peek();

};


Queue::Queue()
{
	q = new queue;
	q -> rear = nullptr;
	q -> front = nullptr;
}

queue* Queue::insert(int val)
{
	node *ptr;
	ptr = new node;
	ptr -> data = val;

	// your code
	
	return q;
}

queue* Queue::display()
{
	node* ptr;
	ptr = q -> front;
	if(ptr == nullptr)
		cout << "\n QUEUE IS EMPTY";
	else
	{
		cout << "\n";
		while(ptr!=q -> rear)
		{
			cout << ptr -> data << "\t";
			ptr = ptr -> next;
		}
		cout << ptr -> data << "\t";
	}
	return q;
}

queue* Queue::delete_element()
{
	node* ptr;
	ptr = q -> front;

	// your code

	return q;
}
int Queue::peek()
{
	if(q->front==nullptr)
	{
		cout << "\n QUEUE IS EMPTY";
		return -1;
	}
	else
		return q->front->data;
}

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
