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
	int delete_element();
	queue* display();
	int peek();
	void move_next();

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

	if (q -> front == nullptr){
		q -> front = q -> rear = ptr; 
        q -> front -> next = q -> rear -> next = nullptr;
	}
	else{
		q -> rear -> next = ptr;
		q -> rear = ptr;
		q -> rear -> next = nullptr;
		q -> rear -> next = q -> front;
	}
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

int Queue::delete_element()
{
	node* ptr;
	int val;
	ptr = q -> front;

	if (ptr = nullptr){
		cout << "UNDERFLOW"<< endl;
	}else {
		val = q -> front -> data;
        q -> front = q -> front -> next;
		q -> rear -> next = q -> front;
        delete ptr;
    }
	delete ptr;

	return val;
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

void Queue::move_next(){
	q -> front = q->front->next;
	q -> rear = q->rear->next;
}

