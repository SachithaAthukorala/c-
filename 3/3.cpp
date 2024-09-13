#include<iostream>
#include<string>

using namespace std;

class Bank{
private:
	string Name;
	int AccNo;
	double Balance;
public:
	void setAccountDetails(string name,int accno,double balance){
		Name=name;
		AccNo=accno;
		Balance=balance;
	}
	
	void withdraw(double ammount){
		if(ammount>Balance){
			cout<<"Insufficient balance!"<<endl;
		}else{
			Balance-=ammount;
		}
	}	 
	void deposit(double ammount){
		Balance+=ammount;	 
	}
	
	void displayAccountDetails(){
		cout<<"Holder's Name	: "<<Name;
		cout<<"Account Number	: "<<AccNo;
		cout<<"Balance			: "<<Balance;
	}
			    
};

int main(){

	Bank account;
    string name;
    int accNumber;
    double initialBalance, amount;
    char transactionType;
	
	cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;


 
    account.setAccountDetails(name, accNumber, initialBalance);
	
	
	 while (true){ 
        cout << "\nChoose transaction type: (D)eposit, (W)ithdraw, (Q)uit: ";
        cin >> transactionType;


        if (transactionType == 'D' || transactionType == 'd') {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        } else if (transactionType == 'W' || transactionType == 'w'){ 
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        } else if (transactionType == 'Q' || transactionType == 'q') {
            break;
        } else {
            cout << "Invalid transaction type!" << endl;
		}
        


        // Display updated account detail
        account.displayAccountDetails();
    }


    cout << "\nTransaction complete. Final account details:" << endl;
    account.displayAccountDetails();
	
	
	return 0;
}

