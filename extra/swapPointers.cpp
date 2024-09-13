#include<iostream>
using namespace std;


void swapNumbers(int*x,int*y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){

int x=10,y=20;
cout<<"Brfore Swap : x = "<<x<<" y = "<<y<<endl;
swapNumbers(&x,&y);
cout<<"After Swap : x = "<<x<<" y = "<<y<<endl;
return 0;
}

