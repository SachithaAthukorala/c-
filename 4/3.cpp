#include<iostream>
#include<string>

using namespace std;

class Employee{
protected:
	string Name;
public:
	Employee(string name):Name(name){}
	
	virtual void displayDetails(){
		cout<<"Name : "<<Name;
	}	 
};

class Manager:public Employee{
public:
	Manager(string name):Employee(name){}
	void displayDetails(){
		cout<<"Manager Name : "<<Name;
		cout<<endl;
	}
};

class AssistantManager:public Employee{
protected:
	string Branch;	  
public:
	AssistantManager(string name,string branch):Employee(name),Branch(branch){}
	void displayDetails(){
		cout<<"Assistant Manager"<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<"Branch : "<<Branch<<endl;
		cout<<endl;
	}
};

class BranchManager:public Employee{
protected:
	string Branch;
	int Employees;
public:
	BranchManager(string name,string branch,int employees):Employee(name),Branch(branch),Employees(employees){}
	
	void displayDetails(){
		cout<<"Branch Manager"<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<"Branch : "<<Branch<<endl;
		cout<<"Employees : "<<Employees<<endl;
		cout<<endl;
	}

};

class GeneralEmployee:public Employee{
protected:
	string Branch;
	string Section;
public:
	GeneralEmployee(string name,string branch,string section):Employee(name),Branch(branch),Section(section){}	
	void displayDetails(){
	cout<<"Employee"<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<"Branch : "<<Branch<<endl;
		cout<<"Section : "<<Section<<endl;
		cout<<endl;
	}
};

int main(){
	Manager manager("John");
    AssistantManager assistantManager("Sara", "New York");
    BranchManager branchManager("Mike", "California", 50);
    GeneralEmployee employee("Emily", "Texas", "Sales");
	
	manager.displayDetails();
    assistantManager.displayDetails();
    branchManager.displayDetails();
    employee.displayDetails();


    return 0;

}

