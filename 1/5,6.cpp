#include<iostream>

using namespace std;

int main(){

int x,y;
char cal;

cout<<"Enter Number 1 : ";
cin>>x;

cout<<"Enter Number 2 : ";
cin>>y;

cout<<"Enter Calculation : ";
cin>>cal;

switch(cal){
	case '+':cout<<"Sum is "<<x+y;
			break;
	case '-':cout<<"Substract is "<<x-y;
			break;
	case '*':cout<<"Product is "<<x*y;
			break;
	case '/':
			if(y!=0){
			cout<<"Divition is "<<(double)(x/y);
			}else{
			cout<<"Undifined";
			}
			break;
	default:
			cout << "Invalid" << endl;	 	  	  	   	      	   	         

}

}

