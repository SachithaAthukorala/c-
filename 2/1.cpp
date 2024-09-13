#include<iostream>
using namespace std;

float circarea(float r){
	float pi = 3.14;
	return pi*r*r;
}

int main(){

float radius,x;

cout<<"Enter Radius of Circle : ";
cin>>radius;
cout<<endl;

x = circarea(radius);

cout<<"Area of the Circle is : "<<x<<endl;

return 0;
}

