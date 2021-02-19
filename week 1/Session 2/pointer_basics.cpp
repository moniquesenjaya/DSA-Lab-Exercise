#include <iostream>
using namespace std;


int main(){
	
    int x = 99;

    cout << "The content of x is " << x << endl;
    cout << "The address of x is " << &x << endl;

    // your code here
    int* ptr;

    ptr = &x;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ptr << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ptr << endl;

    //change the initial variable to 115
    x = 115;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ptr << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ptr << endl;

    int* foo;
    foo = new int;

    *foo = 333;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << foo << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *foo << endl;

    delete foo;
    delete ptr;
}