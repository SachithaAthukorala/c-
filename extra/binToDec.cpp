#include<iostream>

using namespace std;

int main(){
long int binary,reminder,decimal=0,base=1;
cout<<"Enter Binary Number : ";
cin>>binary;

while(binary>0){
	reminder = binary%10;
	decimal+=(reminder*base);
	binary/=10;
	base*=2;
}

cout<<"Decimal Value of Binary Number = "<<decimal;
return 0;
}

