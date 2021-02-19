#ifndef ARRAYLIST
#define ARRAYLIST

#include <iostream>
using namespace std;

// global variables
int maxSize = 0;     //to store the maximum size of the list
int *list = NULL; //array to hold the list elements 
int length = 0;    //to store the length of the list

bool isEmpty()
{
    return (length == 0);
}

bool isFull()
{
    return (length == maxSize);
}

int listSize()
{
    return length;
}

int listCapacity()
{
    return maxSize;
}

void print()
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";

    cout << endl;
}

void insertAt(int location, int insertItem)
{
    if (location < 0 || location >= maxSize)
        cerr << "The position of the item to be inserted "
             << "is out of range" << endl;
    else
        if (length >= maxSize)  //list is full
            cerr << "Cannot insert in a full list" << endl;
        else
        {
            for (int i = length; i > location; i--)
                 list[i] = list[i - 1];   //move the elements down

            list[location] = insertItem;  //insert the item at the 
                                          //specified position

            length++;     //increment the length
    }
} //end insertAt

void insert(int insertItem)
{

    if (length >= maxSize)  //the list is full
        cerr << "Cannot insert in a full list" << endl;
    else
    {
         list[length] = insertItem;   //insert the item at the end
         length++;   //increment the length
    }
} //end insertEnd

void removeAt(int location)
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be removed "
             << "is out of range" << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i+1];

        length--;
    }
} //end removeAt

int retrieveAt(int location) 
{
	int retItem = -1; // this default value represent out of range condition
    if (location < 0 || location >= length)
        cerr << "The location of the item to be retrieved is "
             << "out of range." << endl;
    else
        retItem = list[location];
    
    return retItem;
} //end retrieveAt


void replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be replaced is "
             << "out of range." << endl;
    else
        list[location] = repItem;

} //end replaceAt

void clearList()
{
	// reset all the element to the default value, which is 0
	for(int i = 0; i<maxSize; i++){
		list[i] = 0;
	}
    length = 0;
} //end clearList

int seqSearch(int item)
{
    int loc;
    bool found = false;

    for (loc = 0; loc < length; loc++)
        if (list[loc] == item)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

void remove(int removeItem)
{
    int loc;

    if (length == 0)
        cerr << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove


void createList(int size)
{
    if (size < 0)
    {
        cerr << "The array size must be positive. Creating "
             << "an array of size 100. " << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;

    list = new int[maxSize];
}

#endif
