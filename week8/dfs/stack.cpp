// Stacks implementation
// implementation of stack operations: push, pop, and peek.
#include <iostream>
#include <vector>
#include "stack.h"
using namespace std;

void Stack::push(int val)
{
	if(top == MAX-1)
	{
		cout << "\n STACK OVERFLOW";
	}
	else
	{
		top++;
		st[top] = val;
	}
}

int Stack::pop()
{
	int val;
	if(top == -1)
	{
		cout << "\n STACK UNDERFLOW";
		return -1;
	}
	else
	{
		val = st[top];
		top--;
		return val;
	}
}

void Stack::display()
{
	if(top == -1)
		cout << "\n STACK IS EMPTY";
	else
	{
		for(int i=top;i>=0;i--)
			cout << "\n" << st[i];
		cout << "\n"; // Added for formatting purposes
	}
}

int Stack::peek()
{
	if(top == -1)
	{
		cout << "\n STACK IS EMPTY";
		return -1;
	}
	else
		return (st[top]);
}


bool Stack::empty()
{
	if(top == -1)
		return true;
	else
		return false;		
}

vector<int> Stack::traverse()
{
	vector<int> s_items;
	for(int i=top;i>=0;i--)
		s_items.push_back(st[i]);
	
	return s_items;
}
