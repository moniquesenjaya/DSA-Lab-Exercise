#include <iostream>
#include <fstream>
using namespace std;

int lin_search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] ==x)
            return i;
    return -1;
};

int main(){
    //hardcoded
    cout << "Hardcoded" << endl;
    int data_hardcoded[5] = {2,3,4,10,40};

    int search;
    cout << "Enter the number to be searched: ";
    cin >> search;

    int result = lin_search(data_hardcoded, 5, search);

    if (result != -1)
    {
        cout << "It is found in index " << result << endl;
    }
    else
    {
        cout << "It is not found" << endl;
    }
    cout << "==============\n" << endl;

    //keyboard entry
    cout << "Keyboard" << endl;
    int numInp;
    int x;

    cout << "Type in the amount of number to input: ";
    cin >> numInp;

    int data_keyboard[numInp];

    for (int i = 0; i<numInp; i++)
    {
        cout << "Enter the number: ";
        cin >> x;
        data_keyboard[i] =x;
    }

    cout << "Enter the number to be searched: ";
    cin >> search;

    result = lin_search(data_keyboard, 5, search);

    if (result != -1)
    {
        cout << "It is found in index " << result << endl;
    }
    else
    {
        cout << "It is not found" << endl;
    }

    cout << "==============\n" << endl;
    
    //file

    cout << "File" << endl;

    int data_file[5];
    ifstream file;
    int i=0;

    file.open("input.txt");

    while (file >> x) {
        data_file[i] = x;
        i++;
    }

    file.close();

    cout << "Enter the number to be searched: ";
    cin >> search;

    result = lin_search(data_keyboard, 5, search);

    if (result != -1)
    {
        cout << "It is found in index " << result << endl;
    }
    else
    {
        cout << "It is not found" << endl;
    }
    return 0;
};
