#include <iostream>
using namespace std;

int main(){
    // If empy array is declared, values need to be specified, that will be the fixed size
    int z[] {10, 20, 30, 40};
    cout << z[1] << endl;

    // Store a maximum of 3 values
    int x[3];
    x[1] = 100;
    cout << x[1];
}