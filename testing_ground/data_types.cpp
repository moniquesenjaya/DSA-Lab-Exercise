// #include <iostream>
// #include math

#include <bits/stdc++.h>
// macro, creates symbolic constants
#define SIZE(x) sizeof(x) * 8

using namespace std;

void printSignedRange(int count){
    int min = pow(2, count-1);
    int max = pow(2, count-1)-1;
    printf("%d to %d\n", min * (-1), max);
}

void printUnsignedRange(int count){
    unsigned int max = pow(2, count) - 1;
    //cout << "0 to " << max << endl;

}


int main(){
    cout << "Size of integer = " << sizeof(int) << "bytes" << endl;

    cout << "Size of unsigned integer = " << sizeof(unsigned int) << "bytes" << endl;

    cout << "Size of char = " << sizeof(char) << "bytes" << endl;

    cout << "Size of unsigned integer = " << sizeof(unsigned int) << "bytes" << endl;

    cout << "Signed int = ";
    printSignedRange(SIZE(int));

    cout << "Unsigned int = ";
    printUnsignedRange(SIZE(unsigned int));
}