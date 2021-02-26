#include <iostream>

using namespace std;

class Shape{
    public:
        int getWidth(){
                return width;
            }
		
		int getHeight(){
			return height;
		}

        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
        int getArea(){
            return (width*height);
        }
    protected:
        int width;
        int height;
    
    Shape(int w, int h){
        width = w;
        height = h;
    }
};

class Triangle: public Shape{
    public:
        int getArea(){
            return 0.5*getWidth()*getHeight();
        }

        Triangle(int w, int h): Shape(w,h){
        }
};

class Rectangle: public Shape{
    public:
        int getArea(){
            getWidth()*length;
        }

        int getLength(){
			return length;
		}

        void setLength(int l){
            length = l;
        }

        Rectangle(int w, int h, int l): Shape(w,h){
        length = l;
    }
    
    protected:
        int length;

    
};


int main(){
    int wt;
    int ht;
    cout << "Input the width of triangle: ";
    cin >> wt;
    cout << "Input the height of triangle: ";
    cin >> ht;
    Triangle triangle(wt,ht);
    cout << "Total Area: " << triangle.getArea() << endl;
    int wr;
    int lr;
    cout << "Input the width of rectangle: ";
    cin >> wr;
    cout << "Input the length of rectangle: ";
    cin >> lr;
    Rectangle rectangle(wr, 0, lr);
    cout << "Total Area: " << rectangle.getArea() << endl;
}