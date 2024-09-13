#include<iostream>
#include<string>

using namespace std;

class Details{
private:
	string Name;
	int Age;
public:

	void displayDetails(){
		cout<<"My Name is "<<Name<<" and I am "<<Age<<" years old"<<endl;
	}
	
	Details(){
		cout<<"Name : ";
		getline(cin,Name);
		cout<<"Age : ";
		cin>>Age;
		cout<<"\n";
		
		displayDetails();
	}
};


int main(){
	Details details;
	return 0;
}

