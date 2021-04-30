// Stacks
// A program to perform Push, Pop, and Peek operations on a stack.
#ifndef _STACK
#define _STACK
#include <vector>
#define MAX 100 // Altering this value changes size of stack created

using namespace std;

class Stack
{
private:
	int st[MAX]; // a stack of integer
	int top=-1;

public:
	void push(int val);
	int pop();
	int peek();
	void display();	
	bool empty();
	vector<int> traverse();
};

#endif
