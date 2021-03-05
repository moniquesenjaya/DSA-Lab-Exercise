#include <iostream>
#include <cstdlib>
#define MAX 10 // Altering this value changes size of stack created

using namespace std;

class Stack
{
private:
	int st[MAX];
	int top=-1;

public:
	void push(int val);
	int pop();
	int peek();
	void display();	
    void reverseArray();
};

void Stack::push(int val)
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

int Stack::pop()
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

void Stack::display()
{
	int i;
	if(top == -1)
		cout << "\n STACK IS EMPTY";
	else
	{
		for(i=top;i>=0;i--)
			cout << " " << st[i];
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

void Stack::reverseArray() 
{ 
    int SIZE = top;
    int arr[(SIZE)];
    // Reverse the elements 
    for (int i = 0; i <= SIZE; i++) { 
  
        // Update arr[i] 
        arr[i] = pop(); 
    } 
  
    // Print array elements 
    cout << " The reversed list is: ";
    for (int i = 0; i <= SIZE; i++) 
        cout << arr[i] << " "; 
} 
