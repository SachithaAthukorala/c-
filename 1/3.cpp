#include<iostream>

using namespace std;

int main(){
/////////////////////////
 for(int i = 1;i<=7;i+=2){
 	for(int x=7; x>=i;x-=2){
		cout<<" ";
		
	}
	for(int x=1;x<=i;x++){
		cout<<"*";
	}
	
 cout<<"\n";
 }


//////////////////////////////

int k = 5;

for (int i = 1; i <= 5; i++) {

   	for (int j = 1; j <= 5; j++) {
       if (j >= k)
       	cout << "* ";
       else	                  
	   	cout << " ";
	}
	k--;
	cout << "\n";
}
/////////////////////////
	cout << "\n";
	
	
int y = 5;

for(int i=1;i<=5;i++){
	for(int j=5;j>=1;j--){
		if(j>y){
		cout << " ";
		}else{
		cout << "* ";
		}
	}
	y--;
	cout<<"\n";

}

return 0;
}

