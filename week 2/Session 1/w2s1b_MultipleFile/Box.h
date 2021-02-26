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
        
        //~Box(); //Deconstructor
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
