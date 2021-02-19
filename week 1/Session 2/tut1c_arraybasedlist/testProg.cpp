#include <iostream>
#include "arrayList.h"

using namespace std;

int main(){
    // initializing variables
    int new_entry;
    int loc;
    int delete_entry;
    int value_num;
    bool running = true;

    cout << "How many values do you want to store?" << endl;
    cin >> value_num;

    createList(value_num);
    
    while (running == true){
        cout << "Choose what is to be done?" << endl;
        cout << "1. INSERT new data" << endl;
        cout << "2. REPLACE existing data with a new one" << endl;
        cout << "3. DELETE existing data" << endl;
        cout << "4. PRINT data" << endl;
        cout << "5. Finish Program" << endl;

        int choice;
        cin >> choice;

        switch(choice) {
            case '1':
                cout << "Enter new data:" << endl;
                cin >> new_entry;
                insert(new_entry);
                break;
            case '2':
                cout << "Input location of item to be replaced:" << endl;
                cin >> loc;
                cout << "Enter new data";
                cin >> new_entry;
                replaceAt(loc, new_entry);
                break;
            case '3':
                cout << "Enter value to be deleted:" << endl;
                cin >> delete_entry;
                remove(delete_entry);
                break;
            case '4':
                print();
                break;
            case '5':
                running = false;
                break;
    }
    if (running == false){
        break;
    }
}
}