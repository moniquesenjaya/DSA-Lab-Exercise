#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
	Student* link;
};

int main(){
	Student* head;
	Student* current;
	Student* newnode;	
	int sid;
	string sname;
	double sgpa;
    int data;
    int count = 0;

    cout << "How many data do you want to store? ";
    cin >> data;

    

    // cout << "Enter student id: ";
    // cin >> sid;
    // cout << "Enter student name: ";
    // cin >> sname;
    // cout << "Enter student gpa: ";
    // cin >> sgpa;

    // current = head;
    // current->id = sid;
	// current->name = sname;
	// current->gpa = sgpa;
	// current->link = nullptr;
    
    while (count < data){
        cout << "Enter student id: ";
        cin >> sid;
        cout << "Enter student name: ";
        cin >> sname;
        cout << "Enter student gpa: ";
        cin >> sgpa;

        if (count == 0){
            head = new Student;
            current = head;
            current->id = sid;
            current->name = sname;
            current->gpa = sgpa;
            current->link = nullptr;
        }else{
            current -> link = new Student;
            current = current -> link;
            current->id = sid;
            current->name = sname;
            current->gpa = sgpa;
            current -> link = nullptr;
        }
        count++;
    }
        

    current = head;
    cout << "=======================";
    while ( current != nullptr ) {
        cout<< "\nNode: \nID: " << current->id << endl;
        cout << "Name: " << current->name << endl;
        cout << "GPA: " << current-> gpa << endl;
        cout << "=======================";
        current = current->link;
    }
    cout<< "\nNode: \nID: " << current->id << endl;
    cout << "Name: " << current->name << endl;
    cout << "GPA: " << current-> gpa << endl;
    cout << "=======================";

}