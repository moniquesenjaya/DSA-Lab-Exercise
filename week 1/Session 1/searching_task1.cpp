#include <iostream>
using namespace std;

int main(){
	// declare an array
	int ROW = 9;
	int data[ROW] = {3,49,1,6,33,13,9,4,6};
	int key;
    bool check = false;

	// print message to the console
	cout << "What data are you searching for?" << endl;
	
	// get input data
	cin >> key;

    
    for(int i = 0; i < ROW; i++) {
        if (key == data[i]){
            cout << "Found in index " << i;
            check = true;
            }
        }

    if (check == false){
        cout << "Not Found";
    }
}