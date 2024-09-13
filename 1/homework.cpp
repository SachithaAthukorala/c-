#include<iostream>
using namespace std;
int k=2;
int main(){
for(int i = 1;i<=5;i++){
if(i<=3){
	for(int x=1;x<=i;x++){
		cout<<"*";
	}
}else{
	for(int x=1;x<=k;x++){
		cout<<"*";
	}
	k--;
}
cout<<"\n";
}
return 0;
}

