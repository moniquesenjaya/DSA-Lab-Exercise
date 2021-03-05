#include <iostream>
using namespace std;

template <class T>
T larger (T a, T b);

template <class T>
T larger(T a, T b){
    if (a>b)
        return a;
    else
        return b;
}

int main(){
    string data1, data2;
	
	cout << "Enter first data: ";
	cin >> data1;
	
	cout << "Enter second data: ";
	cin >> data2;
		
	cout << "The larger of " << data1 << " and " << data2 << " is " << larger(data1, data2) << endl;

	return 0; 
}