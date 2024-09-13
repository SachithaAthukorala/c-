#include<iostream>

using namespace std;

double balance = 0.0; 

double checkBalance(){
 return balance;
 cout<<endl;
}

void deposit(double amount){
	balance+=amount;
	cout<<"Money Diposited Successfully"<<endl;
}

void withdrawal(double amount){
	if(amount>balance){
		cout<<"Sorry there is not enough money"<<endl;
	}else{
		balance-=amount;
		cout<<"Money Withdrawed Successfully"<<endl;
	}
}

void calculateInterest(double rate){
	double interest = balance*rate/100;
	balance += interest;
	cout<<"Interest = "<<interest<<endl;
	cout<<"Interest Added Successfully"<<endl;
}

int main(){

int choice;
double dipoAmmount,withAmmount,rate;


do{
cout<<endl;

cout<<"1	Check Bank Balance"<<endl;
cout<<"2	Deposit"<<endl;
cout<<"3	Withdraw"<<endl;
cout<<"4	Interest"<<endl;
cout<<"5	Exit"<<endl;


cout<<"Enter Your Choise : ";
cin>>choice;

cout<<endl;
cout<<endl;

	switch (choice){
		case 1:
			cout<<"Balance = "<<checkBalance()<<endl;
			cout<<endl;
			break;
		case 2:
			cout<<"Enter Diposit Ammount : ";
			cin>>dipoAmmount;
			deposit(dipoAmmount);
			break;
		case 3:
			cout<<"Enter Withdraw Ammount : ";
			cin>>withAmmount;
			withdrawal(withAmmount);
			break;
		case 4:
			cout<<"Enter Interest Rate : ";
			cin>>rate;
			calculateInterest(rate);
			break;
		case 5:
			cout << "Exiting the program..." << endl;
			exit(0);
			break;
		default:
			cout<<"Invalid Code"; 	       	   
			break;
	}
}
while(choice!=5);

return 0;
}

