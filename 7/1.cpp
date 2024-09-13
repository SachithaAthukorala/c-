#include<iostream>

using namespace std;


class Shape{
private:
	const float pi;	   
public:
	Shape():pi(3.14){}

void area(double r){
	cout<<"Area of the Circle is	: "<<pi*r*r<<endl;
}
void area(double w, double h){
	cout<<"Area of the Rectangle is	   : "<<w*h<<endl;
}
void area(float x,int w,int h){
	cout<<"Area of the Trangle is	 : "<<x*w*h<<endl;
}

};


int main(){


Shape shape;
int x,w,h;
double radius,width,height;


do{
cout<<"1-Circle\n2-Rectangle\n3-Trangle"<<endl;
cout<<"Enter Code :";
cin>>x;

switch(x){
	case 1:	cout<<"Enter Radius of Circle : ";
			cin>>radius;
			shape.area(radius);
			break;
	case 2:	cout<<"Enter Width of Rectangle : ";
			cin>>width;
			cout<<"Enter Height of Rectangle : ";
			cin>>height;
			shape.area(width,height);
			break;
	case 3:	cout<<"Enter Width of Trangle : ";
			cin>>w;
			cout<<"Enter Height of Trangle : ";
			cin>>h;
			shape.area(0.5,w,h);
			break;	   	   	   	   	    	   
	default:cout<<"Invalid Code"<<endl;
}

}while(x>0);

return 0;
}

