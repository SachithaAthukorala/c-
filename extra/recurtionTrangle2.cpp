#include<iostream>
using namespace std;

void printSpace(int spaces){
	if(spaces==0){
		return;
	}
	
	cout<<" ";
	printSpace(spaces-1);
}

void printStars(int stars){
	if(stars==0){
		return;
	}
	cout<<"* ";
	printStars(stars-1);
}

void recursiveTriangle(int n,int original){
	if(n<0){
		return;
	}
	
	printSpace(n);
	printStars(original-n);
	cout<<endl;
	recursiveTriangle(n-1,original);	
}


int main(){
// normal Triangle
int x;
cout<<"Enter No of Rows	: ";
cin>>x;

recursiveTriangle(x,x);

return 0;
}

