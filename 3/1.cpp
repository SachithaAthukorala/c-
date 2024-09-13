#include<iostream>
using namespace std;

class Circle{
	private:
		double radius;
	public:
		void setRadius(double r){
			radius = r;
		}
		double calculateArea(){
			return 3.14*radius*radius;
		}
		void displayArea(){
			cout<<"Area of the Circle is : "<<calculateArea()<<endl;
		}	 
};

int main(){

	Circle circle;
	double r;
	
	cout<<"Enter Radius : ";
	cin>>r;

	circle.setRadius(r);
	circle.displayArea();
	
	return 0;
}

