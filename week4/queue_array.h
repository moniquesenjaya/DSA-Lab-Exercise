// Queueu
// a program to implement a queue using a normal array (linear array)
#include <iostream>
#include <cstdlib>
#define MAX 10 // Changing this value will change length of array

using namespace std;

class Queue
{
private:
	int queue[MAX];
	int front = -1, rear = -1;

public:
	void insert(int);
	int delete_element();
	int peek();
	void display();
};

void Queue::insert(int num)
{
	if (rear == MAX -1){
		cout << "queue overflow" << endl;
	}else if(front == -1 & rear == -1){
		front = rear = 0;
		queue[rear] = num;
	} else{
		rear++;
		queue[rear] = num;
	}
}

int Queue::delete_element()
{
	int val;
	
	if (front == -1 || front > rear) 
    { 
        cout << "Queue underflow"<<endl; 
		return -1;
    } else{
		val = queue[front];
		front++;
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