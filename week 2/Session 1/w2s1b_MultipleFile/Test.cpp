#include <iostream>
#include "Box.h"

using namespace std;

int main(){
	
	// create an object of Box
	Box mybox;
	Box yourbox(3, 6, 10);
	
	// set the width, length and height of mybox
	mybox.setLength(5);
	mybox.setWidth(8);
	mybox.setHeight(15);
	
	// get the dimension of mybox
	cout << "The dimension (length, width, height) of mybox is:  ("<< mybox.getLength() << ", " << mybox.getWidth() << ", " << mybox.getHeight() << ")" << endl;
	
	// calculate the area of myBox
	cout << "The area of mybox is: " << mybox.calculateArea() << endl;
	
	// calculate the volume of myBox
	cout << "The volume of mybox is: " << mybox.calculateVolume() << endl;
	
}
