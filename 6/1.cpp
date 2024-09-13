#include<iostream>
using namespace std;


class Shape{
protected:
	int width;
	int height;
public:
	void setData(int w,int h){
		width=w;
		height=h;
	}	 

};

class Rectangle:public Shape{
	public:
		int getArea(){
			return width*height;
		}

};

int main(){
Rectangle shape;

shape.setData(100,12);
cout<<shape.getArea();
}

