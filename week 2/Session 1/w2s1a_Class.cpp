#include <iostream>
using namespace std;

class Box {

    

    protected:
        int length;
        int width;
        int height;

    public:
        
        Box() {     // Default
            length = 0;
            width = 0;
            height = 0;
        }
        
        Box(int l, int w, int h) { // Constructor with parameters
            length = l;
            width = w;
            height = h;
        }

        int getLength(){
            return length;
        }

        int getWidth(){
            return width;
        }

        int getHeight(){
            return height;
        }

        void setLength(int l){
            length = l;
        }

        void setWidth(int w){
            width = w;
        }

        void setHeight(int h){
            height = h;
        }

        int calculateArea(){
            return width * length;
        }
        int calculateVolume(){
            return width * length * height;
        }
};

int main(){
    Box box2;
    Box box1(1,2,3);

    cout << "Printing the default constructor" << endl;

    cout << "The length of the box is: " << box2.getLength() << endl;
    cout << "The width of the box is: " << box2.getWidth() << endl;
    cout << "The height of the box is: " << box2.getHeight() << endl;

    cout << "=================" << endl;


    cout << "Printing the constructor with parameters" << endl;
    cout << "The length of the box is: " << box1.getLength() << endl;
    cout << "The width of the box is: " << box1.getWidth() << endl;
    cout << "The height of the box is: " << box1.getHeight() << endl;

    cout << "=================" << endl << "\nAfter the value is changed\n";

    box1.setLength(10);
    box1.setWidth(20);
    box1.setHeight(30);
    
    cout << "The length of the box is: " << box1.getLength() << endl;
    cout << "The width of the box is: " << box1.getWidth() << endl;
    cout << "The height of the box is: " << box1.getHeight() << endl;

    cout << "=================\n"<< endl;

    cout << "The area of the box is: " << box1.calculateArea() << endl;
    cout << "The volume of the box is: " <<box1.calculateVolume() << endl;

    return 0;

};