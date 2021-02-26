#include <iostream>
using namespace std;

//one function works for all data types
template <typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
    //if TRUE return x, else return y
}

int main(){
    cout << myMax<int>(10, 40)<<endl;
    cout << myMax<char>('s', 'm');
}