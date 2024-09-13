#include<iostream>
using  namespace std;

int recurtionFactorial(int n){
	if(n==1||n==0){
		return 1;
	}
	
	return n*recurtionFactorial(n-1);
}

int main(){
	int x;
	cout<<"Enter a Number : ";
	cin>>x;
	cout<<endl;
	cout<<"Factorial of Number "<<x<<" is "<<recurtionFactorial(x);

return 0;
}

