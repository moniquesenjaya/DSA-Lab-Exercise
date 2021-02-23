#include <iostream>
#include "arrayList.h"

using namespace std;

// Its still doing an endless loop, im not sure how to debug this, im sorry, i have tried using your code too

int selectedMenu() {
    int choice;

    cout << "Welcome to My Database.\n";
    cout << "===========================.\n";
    cout << "1. INSERT Item\n";
    cout << "2. REPLACE Item\n";
    cout << "3. DELETE Item \n";
    cout << "4. PRINT Item \n";
    cout << "5. Exit \n";
    cout << "Enter an option: ";
    cin >> choice;

    return choice;
}


void start() {
    int num;
    int loc;

    while (true) {
        int choice = selectedMenu();
        switch (choice) {
        case 1:
            cout << "Enter an integer: ";
            cin >> num;
            insert(num);
            break;
        case 2:
            cout << "Enter the position (index) to be replaced: ";
            cin >> loc;
            cout << "Enter a new data: ";
            cin >> num;
            replaceAt(loc, num);
            break;
        case 3:
            cout << "Enter the data to remove: ";
            cin >> num;
            remove(num);
            break;
        case 4:
            print();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Menu unavailable...\n";
            break;
        }
    cout << "\n\n";
    }
}

int main(){
    // initializing variables
    int value_num;
    bool running = true;

    cout << "How many values do you want to store? ";
    cin >> value_num;

    createList(value_num);
    
    selectedMenu();

    start();
}