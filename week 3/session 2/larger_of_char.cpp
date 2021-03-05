#include <iostream>
#include <string>
using namespace std;

// your code here


char larger(char a, char b){
    if (a>b)
        return a;
    else
        return b;
}

int main() {
	char data1, data2;
	
	cout << "Enter first data: ";
	cin >> data1;
	
	cout << "Enter second data: ";
	cin >> data2;
		
	cout << "The larger of " << data1 << " and " << data2 << " is " << larger(data1, data2) << endl;

	return 0; 
}