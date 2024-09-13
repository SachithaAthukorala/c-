#include<iostream>
using namespace std;


void dailyTot(int x[7][3],int *daily){
cout<<"Daily Ernings\n"<<endl;

	
	for(int i=0;i<7;i++){
		daily[i]=0;
		for(int j=0;j<3;j++){
			daily[i] += x[i][j];
		}
	}
	
}	 

void weekEachProduct(int x[7][3],int *weekItem){
cout<<"Week Item Earning\n"<<endl;
	for(int i=0;i<3;i++){
		weekItem[i]=0;
		for(int j=0;j<7;j++){
			weekItem[i] += x[j][i];
		}
	}

}

int main(){

int x[7][3];
int daily[7];
int weekItem[3];
int wholeWeek=0;

	for(int i=0;i<7;i++){
		for(int j=0;j<3;j++){
			cout<<"day "<<i+1<<" item "<<j+1<<" = ";
			cin>>x[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<7;i++){
		for(int j=0;j<3;j++){
			cout<<x[i][j]<<"	";
			
		}
		
		cout<<endl;
	}

cout<<endl;
dailyTot(x,daily);

	for(int i=0;i<7;i++){
		cout<<"Day "<<i+1<<" = "<<daily[i];
		wholeWeek+=daily[i];
		cout<<endl;
	}
cout<<endl;	
weekEachProduct(x,weekItem);
	for(int i=0;i<3;i++){
		cout<<"Item "<<i+1<<" week earning = "<<weekItem[i];
		cout<<endl;
	}
	
	cout<<"\nTotal earnings for the whole week = "<<wholeWeek<<endl;

}

