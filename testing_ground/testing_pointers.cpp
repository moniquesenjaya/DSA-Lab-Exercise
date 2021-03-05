#include <iostream>
using namespace std;

int main(){
    int *p;
    int num1 = 5;
    int num2 =  8;

    p = &num1;

    cout << "Line 9: &num1 = " << &num1 << ", p = " << p << endl;
    cout << "Line 10: num1 = " << num1 << ", *p = " << *p << endl;
}
