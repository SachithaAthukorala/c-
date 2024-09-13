#include<iostream>
#include<string>
using namespace std;

int main(){
int decimal,reminder;
cout<<"Enter Decimal Value : ";
cin>>decimal;

string binary ="";

while(decimal>0){
	reminder = decimal%2;
	binary = char('0'+reminder)+binary;
	decimal/=2;
}
cout<<"Binary Value : "<<binary;
return 0;
}

