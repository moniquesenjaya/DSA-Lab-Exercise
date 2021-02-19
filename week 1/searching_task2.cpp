#include <iostream>
using namespace std;

int main(){
	// declare an array
	int ROW = 6;
	string data[ROW] = {"Nicky","David","Guntur","Cindy","Rizqy","James"};
	string key;
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