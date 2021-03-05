// Stacks
// A program to perform Reverse printing of a list.
#include <iostream>
#include "w3s1b.h"
#include <cstdlib>


using namespace std;

int main(int argc, char *argv[]) {
	int val, option;
	Stack st;
	do
	{
		cout << "\n *****MAIN MENU*****";
		cout << "\n 1. PUSH";
		cout << "\n 2. POP";
		cout << "\n 3. PEEK";
		cout << "\n 4. DISPLAY";
        cout << "\n 5. Reverse (This will delete all the values in the stack)";
		cout << "\n 6. EXIT";
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
            case 5:
                st.reverseArray();
                break;
		}
	}while(option != 6);
	return 0;
}
/*
Output
*****MAIN MENU*****
1. PUSH
2. POP
3. PEEK
4. DISPLAY
5. EXIT
Enter your option : 1
Enter the number to be pushed on stack : 500
*/


