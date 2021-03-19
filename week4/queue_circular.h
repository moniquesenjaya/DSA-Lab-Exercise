// Queue
// a program to implement a queue using circular array.
#include <iostream>
#include <cstdlib>
#define MAX 10

using namespace std;

class Queue
{
private:
	int queue[MAX];
	int front=-1, rear=-1;

public:
	void insert(int);
	int delete_element();
	int peek();
	void display();
	
};

void Queue::insert(int num)
{
	if(((rear == MAX-1 && front == 0) || (rear == front-1)))
		cout << "\n OVERFLOW";
	else if(front==-1 && rear==-1)
	{
		front = rear = 0; 
        queue[rear] = num; 
	}
	else if(rear==MAX-1 && front!=0)
	{
		rear = 0; 
        queue[rear] = num;
	}
	else
	{
		rear++; 
        queue[rear] = num; 
	}
}

int Queue::delete_element()
{
	int val;
	if(front==-1 && rear==-1)
	{
		cout << "Queue is empty" <<endl;
		return -1;
	}
	val = queue[front];

	if(front==rear)
		front=rear= -1;

	else if (front == MAX-1) 
        front = 0; 
		
    else
		front++; 

	return val;
	
}

int Queue::peek()
{
	if(front==-1 && rear==-1)
	{
		cout << "\n QUEUE IS EMPTY";
		return -1;
	}
	else
	{
		return queue[front];
	}
}

void Queue::display()
{
	int i;
	cout << "\n";
	if (front ==-1 && rear== -1)
		cout << "\n QUEUE IS EMPTY";
	else
	{
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
				cout << "\t " << queue[i];
		}
		else
		{
			for(i=front;i<MAX;i++)
				cout << "\t " << queue[i];
			for(i=0;i<=rear;i++)
				cout << "\t " << queue[i];
		}
	}
}

