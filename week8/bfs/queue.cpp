// Queue
// a program to implement a queue using a normal array (linear array)
#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

/*
Queue::Queue()
{
	int front = -1;
	int rear = -1;	
}
*/

void Queue::insert(int num)
{
	if(rear == MAX-1)
		cout << "\n OVERFLOW";
	else if(front == -1 && rear == -1)
		front = rear = 0;
	else
		rear++;

	queue[rear] = num;
}

int Queue::delete_element()
{
	int val;
	if(front == -1 || front>rear)
	{
		cout << "\n UNDERFLOW";
		return -1;
	}
	else
	{
		val = queue[front];
		front++;
		if(front > rear)
			front = rear = -1;
		return val;
	}
}

int Queue::peek()
{
	if(front==-1 || front>rear)
	{
		cout << "\n QUEUE IS EMPTY";
		return -1;
	}
	else
	{
		return queue[front];
	}
}

bool Queue::empty()
{
	bool r = false;
	if(front==-1 || front > rear)
		r = true;
	
	return r;		
}

void Queue::display()
{
	int i;
	cout << "\n";
	if(front == -1 || front > rear)
		cout << "\n QUEUE IS EMPTY";
	else
	{
		for(i = front;i <= rear;i++)
			cout << "\t " << queue[i];
	}
}

vector<int> Queue::traverse()
{
	vector<int> q_items;
	for(int i = front;i <= rear;i++)
		q_items.push_back(queue[i]);
	
	return q_items;
}
