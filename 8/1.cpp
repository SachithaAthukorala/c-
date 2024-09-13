#include<iostream>

using namespace std;

class Adder {
private:
	int total;
public:
	Adder():total(0){}	
	  
	int calNum(){
		int num[3];
		for(int i=0;i<3;i++){
			cout<<"Enter Number "<<i+1<<" : ";
			cin>>num[i];
			total+=num[i];
		}
	
	return total;	 
	}
	
};

int main(){
Adder ad;

cout<<ad.calNum();
return 0;
}

