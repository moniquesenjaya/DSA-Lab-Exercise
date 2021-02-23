#include <algorithm> // std::transform
#include <iostream>
using namespace std;

// Added a make lowercase function that i learnt from some research

string make_lowercase( const string& in ) // Just for notes: The data type const string& literally means “a reference to a string object whose contents will not be changed.”
{
  string out;
  transform( in.begin(), in.end(), back_inserter( out ), ::tolower);
  /*The :: operator separates namespaces. When it starts a name, it is an explicit reference to 
  the top level, global namespace. Its use here guarantees that it is referring to the function 
  declared by the C library and not any that happens to be in the class, the current namespace, 
  or any using namespace declarations.*/
  return out;
}

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
    key = make_lowercase(key);

    
    for(int i = 0; i < ROW; i++) {
        if (key == make_lowercase(data[i])){ //Changed this and added the function
            cout << "Found in index " << i;
            check = true;
            }
        }

    if (check == false){
        cout << "Not Found";
    }
}