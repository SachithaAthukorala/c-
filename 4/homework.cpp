#include<iostream>

using namespace std;

class Circle{

private:
	double Radius;
	static const double pi;
public:

	Circle():Radius(1.0){}
	Circle(double r):Radius(r){}	   
	
	double getRadius(){
		return Radius;
	}
	
	double area(){
		return pi*Radius*Radius;
	}
};
const double Circle::pi = 3.14;
int main(){
Circle circle(7);

cout<<"Radius	: "<<circle.getRadius()<<endl;
cout<<"Area	: "<<circle.area()<<endl;
return 0;
}

