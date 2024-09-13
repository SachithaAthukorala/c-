#include<iostream>

using namespace std;



int square(int x){
 return x*x;
}

int add(int x,int y){
	return square(x+y);
}


int multiply(int x,int y){

int a,b;

cout<<"Enter another value to multiply "<<x<<"x";
cin>>a;
cout<<"Enter another value to multiply "<<y<<"x";
cin>>b;

return add(x*a,y*b);

}

int main(){
int a,b,x;

cout<<"Enter Value 1 : ";
cin>>a;
cout<<"Enter Value 2 : ";
cin>>b;

x = multiply(a,b);
cout<<endl;
cout<<"Result is : "<<x;
return 0;
}

