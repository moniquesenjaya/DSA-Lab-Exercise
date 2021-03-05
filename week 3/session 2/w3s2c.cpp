#include <iostream>
#include "w3s2c.h"

using namespace std;

int main(int argc, char *argv[]) {
	
    int option;
	Stack<int> st;
    int val;
	do
	{
		cout << "\n *****MAIN MENU*****";
		cout << "\n 1. PUSH";
		cout << "\n 2. POP";
		cout << "\n 3. PEEK";
		cout << "\n 4. DISPLAY";
		cout << "\n 5. EXIT";
		cout << "\n Enter your option: ";
		cin >> option;
		switch(option)
		{
			case 1:
					cout << "\n Enter the number to be pushed on stack: ";
					cin >> val;
					st.push(val);
					break;
			case 2:
					val = st.pop();
					if(val != -1)
						cout << "\n The value deleted from stack is: " << val;
					break;
			case 3:
					val = st.peek();
					if(val != -1)
						cout << "\n The value stored at top of stack is: " << val;
					break;
			case 4:
					st.display();
					break;
		}
	}while(option != 5);
	return 0;
}