#include <iostream>
#include <cstdlib>
#define MAX 10 // Altering this value changes size of stack created
using namespace std;

template <class T>
class Stack
{
private:
	T st[MAX];
	T top=-1;

public:
	void push(T val);
	T pop();
	T peek();
	void display();	
};

template <class T>
void Stack<T>::push(T val)
{
	// your code
	//check stack is full or not
	if(top==(MAX-1)){
		cout << " Stack is full. " << val << " cannot be entered.";
	}else{
		++top;
		st[top]=val;
	}	
}

template <class T>
T Stack<T>::pop()
{
	// your code
	//to store and print which number is deleted
    int temp;
    //check for empty
    if(top==-1){
		cout << " Stack is empty.";
		return -1;
	}else{
	temp=st[top];
	--top;
	return temp;
	}
}

template <class T>
void Stack<T>::display()
{
	int i;
	if(top == -1)
		cout << "\n STACK IS EMPTY";
	else
	{
		for(i=top;i>=0;i--)
			cout << "\n" << st[i];
		cout << "\n"; // Added for formatting purposes
	}
}

template <class T>
T Stack<T>::peek()
{
	if(top == -1)
	{
		cout << "\n STACK IS EMPTY";
		return -1;
	}
	else
		return (st[top]);
}
