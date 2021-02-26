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

    //Manually
	cout << "Enter student id: ";
	cin >> sid;
	cout << "Enter student name: ";
	cin >> sname;
	cout << "Enter student gpa: ";
	cin >> sgpa;

	head = new Student;
	current = head;

	current->id = sid;
	current->name = sname;
	current->gpa = sgpa;
	current->link = nullptr;

	// Your code here
    cout << "Enter student id: ";
	cin >> sid;
	cout << "Enter student name: ";
	cin >> sname;
	cout << "Enter student gpa: ";
	cin >> sgpa;

    current -> link = new Student;
    current = current -> link;
    current->id = sid;
	current->name = sname;
	current->gpa = sgpa;
    current -> link = nullptr;

    cout << "Enter student id: ";
	cin >> sid;
	cout << "Enter student name: ";
	cin >> sname;
	cout << "Enter student gpa: ";
	cin >> sgpa;

    current -> link = new Student;
    current = current -> link;
    current->id = sid;
	current->name = sname;
	current->gpa = sgpa;
    current -> link = nullptr;

    cout << "Enter student id: ";
	cin >> sid;
	cout << "Enter student name: ";
	cin >> sname;
	cout << "Enter student gpa: ";
	cin >> sgpa;

    current -> link = new Student;
    current = current -> link;
    current->id = sid;
	current->name = sname;
	current->gpa = sgpa;
    current -> link = nullptr;

    current = head; 
    cout<< "Node: \nID: " << current->id << endl;
    cout << "Name: " << current->name << endl;
    cout << "GPA: " << current-> gpa << endl;
    current = current->link;

    cout<< "Node: \nID: " << current->id << endl;
    cout << "Name: " << current->name << endl;
    cout << "GPA: " << current-> gpa << endl;
    current = current->link;

    cout<< "Node: \nID: " << current->id << endl;
    cout << "Name: " << current->name << endl;
    cout << "GPA: " << current-> gpa << endl;
    current = current->link;

    cout<< "Node: \nID: " << current->id << endl;
    cout << "Name: " << current->name << endl;
    cout << "GPA: " << current-> gpa << endl;
    current = current->link;
}

