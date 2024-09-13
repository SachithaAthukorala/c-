#include<iostream>
using namespace std;

int min(int x[10]){
int min = x[0];
	
	for(int i=0;i<10;i++){
		if(x[i]<min){
			min = x[i];
		}
	}
	
	return min;
}

int max(int x[10]){
	int max = x[0];
	for(int i=0;i<10;i++){
		if(x[i]>max){
			max = x[i];
		}
	}
	
	return max;
}

int main(){
	int mi,ma;

	int x[10]={3,2,4,5,6,4,9,7,8,1};

	
	ma = max(x);
	mi = min(x);

	cout<<endl;
	cout<<"Max is : "<<ma<<endl;
	cout<<"Min is : "<<mi<<endl;

return 0;
}

