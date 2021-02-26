#include <iostream>
#include "Box.h"

using namespace std;

int Box::getLength(){
	return length;
}
int Box::getWidth(){
	return width;
}
int Box::getHeight(){
	return height;
}

void Box::setLength(int l){
	length = l;
}
void Box::setWidth(int w){
	width = w;
}
void Box::setHeight(int h){
	height = h;
}


Box::Box(){}

Box::Box(int l, int w, int h){
	length = l;
	width = w;
	height = h;
}

int Box::calculateArea(){
	int area = 2*(width*height+width*length+height*length);
	return area;
}

int Box::calculateVolume(){
	int vol = length*width*height;
	return vol;
}
