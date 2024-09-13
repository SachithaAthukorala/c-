#include<iostream>
using namespace std;


//upside down triangle

void printSpace(int spaces){
	if(spaces==0){
		return;
	}
	cout<<" ";
	printSpace(spaces-1);
}

void printStar(int stars){
	if(stars==0){
		return;
	}

	cout<<"* ";
	printStar(stars-1);
}

void recursionCall(int n,int original){

if(n==0){
	return;
}

printSpace(original-n);
printStar(n);
cout<<endl;
recursionCall(n-1, original);

}

int main(){

int n;

cout<<"Enter No of Rows : ";
cin>>n;

recursionCall(n,n);

return 0;
}

