#include <iostream>

using namespace std;

class Shape{
    public:
        void setWidth(int w){
            width = w;
        }
    public:
        void setHeight(int h){
            height = h;
        }
    protected:
        int width;
        int height;

};

class Rectangle: public Shape{
    public:
        int getArea(){
            return (width*height);
        }
};

int main(){
    Rectangle Rect;
    Rect.setHeight(10);
    Rect.setWidth(30);
    cout << "Total Area: " << Rect.getArea() << endl;
}