#include <iostream>
using namespace std;

// I'm sorry sir im not sure how to solve your third point "be ware of using loop while making decision on only one intended data." other than using multiple ifs.

int main(){
	// declare variables


    bool flag = false; // Declared a flag
	string day;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	// print message to the console
	cout << "What day is it today? (Monday, Tuesday, etc.)" << endl; // Added some example in this line
	// get input data
	cin >> day;

    
    for(int i = 0; i < 7; i++) {
        if (day == days[i]){
            if (i<5){
                cout << "I'm studying";
                flag = true; //Added flag assignment
            }else{
                cout << "I go fishing";
                flag = true; // Added flag assignment
            }  
           
        }
    }
    if (flag==false){
         cout << "Incorrect input! Please use the proper format! (Monday, Tuesday, etc.)"; // Added another if to anticipate wrong input
    }

}
/*
6.	What new C++ programming keywords that you learned from this exercise?
if, for, else
7.	What programming constructs (see the below notes) that you learned from this exercise?

8.	What programming components (see the below notes) that you learned from this exercise?
 
*/