#include<iostream>
using namespace std;



int main(){

int value[3];

for(int i = 0;i<3;i++){
	cout<<"Enter Number "<<i+1<<" :";
	cin>>value[i];
}

cout<<"\n"<<endl;

for(int i = 0;i<3;i++){
	while(value[i]>0){
		cout<<value[i]%10;
		value[i]/=10;
	}
	cout<<endl;
}

return 0;
}

