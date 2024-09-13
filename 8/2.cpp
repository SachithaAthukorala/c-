#include<iostream>

using namespace std;

class Shape{
protected:
	int width,height;
public:
	
	void setWidth(int w){
		width =w;
	}
	
	void setHeight(int h){
		height =h;
	}
	
	virtual void calArea(){
		cout<<"Area : "<< width*height;
	}
};

class Rectangle:public Shape{
public:
	void calArea(){
		cout<<"Area of Rectangle : "<<width*height;
	}
};

class Triangle:public Shape{
public:
	void calArea(){
		cout<<"Area of Triangle : "<< 0.5*width*height;
	}
};


int main(){
Shape*shape;
Rectangle re;
Triangle tr;
int x,w,h;
cout<<"Enter Width :";
cin>>w;
cout<<"Enter Height :";
cin>>h;


cout<<"1-Rectangle\n2-Triangle"<<endl;
cout<<"Enter your Choise";
cin>>x;

switch(x){
	case 1:	shape=&re;
			shape->setWidth(w);
			shape->setHeight(h);
			shape->calArea();
			break;
	case 2:	shape=&tr;
			shape->setWidth(w);
			shape->setHeight(h);
			shape->calArea();
			break;
	default:
			cout<<"Invalid Code";	 	 	   	   	   
}

return 0;
}

