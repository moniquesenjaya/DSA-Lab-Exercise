#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
};

int main(){
	Student s;
	Student* sptr;
	
	int sid;
	string sname;
	double sgpa;

	// your code here
    cout << "Input your student ID: ";
    cin >> s.id;
    cout << "Input your name: ";
    cin >> s.name;
    cout << "Input your GPA: ";
    cin >> s.gpa;

    cout << "\nDisplaying Information." << endl;
    cout << "SID: " << s.id << endl;
    cout <<"Name: " << s.name << endl;
    cout << "GPA: " << s.gpa;
}
