#include <iostream>

using namespace std;

class ArrayADT {
    private:
        const int LEN = 10;
        int* arr;
        int idx;

    public:
        ArrayADT();
        ~ArrayADT();
        bool insert(int item);
        void print();
};

ArrayADT::ArrayADT() {
    arr = new int[LEN];
    idx = 0;
}

ArrayADT::ArrayADT() {
    arr = new int[LEN];
    idx = 0;
}

ArrayADT::~ArrayADT {
    delete(arr);
}

bool ArrayADT::insert(int item) {
    bool success = true;
    if(idx < LEN) {
        arr[idx] = item;
        idx++
    } else {
        success = false;
    }

    return success;
}

void ArrayADT::print() {
    for(int i = 0; i < idx; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    return 0;
}