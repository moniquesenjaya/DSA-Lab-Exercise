#include <iostream>
using namespace std;

int main(){
	// declare variables
	string day;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	// print message to the console
	cout << "What day is it today?" << endl;
	
	// get input data
	cin >> day;

    
    for(int i = 0; i < 7; i++) {
        if (day == days[i]){
            if (i<5){
                cout << "I'm studying";
            }else{
                cout << "I go fishing";
            }  
        }
    }
}
/*
6.	What new C++ programming keywords that you learned from this exercise?
if, for, else
7.	What programming constructs (see the below notes) that you learned from this exercise?

8.	What programming components (see the below notes) that you learned from this exercise?
 
*/