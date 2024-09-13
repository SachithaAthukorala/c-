#include<iostream>
#include<string>

using namespace std;

class Bank{
private:
	string name;
	int accountNo;
	float balance;
public:
	void withdraw(float amount){
		if(balance<amount){
			cout<<"Withdraw Fail";
		}else{
			balance-=amount;
		}	 
	}
	
	void deposit(float amount){
		balance+=amount;	
	}

	void setDetails(string na){
		name = na;
	}
	
	void setBalance(float bal){
		balance=bal;
	}
	
	void displayDetails(){
		cout<<"Name : "<<name<<endl;
		cout<<"Account No : "<<accountNo<<endl;
		cout<<"Balance : "<<balance<<endl;
	}
	
	Bank():balance(20000),accountNo(123){}
};


int main(){
Bank bank;
string name;
int accountNo;


//bank.setBalance(20000);
cout<<"Enter Name : ";
getline(cin,name);
//cout<<"Enter Account No : ";
//cin>>accountNo;
bank.setDetails(name);

bank.displayDetails();
return 0;
} 

