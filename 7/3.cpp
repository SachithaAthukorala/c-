#include<iostream>
#include<string>
using namespace std;

class Employee{
protected:
 string name;
 string empNo;
 int noOfWorkingDays;
 
public:
	int getEmpData(string n,string emN,int noDays){
		name = n;
		empNo = emN;
 		noOfWorkingDays=noDays;
		return 0;
	}
	
	virtual int paySalary(){
		cout<<"Your salary : This is parent class"<<endl;
		return 0;
	}

};

class Manager:public Employee{
private:
	const int mBasic;
public:	   
	Manager():mBasic(5000){}
	
	int paySalary(){
		return mBasic*noOfWorkingDays;
	}
};

class Supervisor:public Employee{
private:
	const int sBasic;
	const int otRate;
	int otHours;
public:	   
	Supervisor():sBasic(1500),otRate(125){}
	
	int paySalary(){
		return (sBasic*noOfWorkingDays)+(otRate*otHours);
	}
	void getSupData(){
		cout<<"Enter Overtime Hours : ";
		cin>>otHours;
	}
};

int main(){
Employee*empPtr;
Manager m;
Supervisor s;

empPtr=&m;
empPtr->getEmpData("Sachitha","saa",25);
cout<<"Salary : "<<empPtr->paySalary()<<endl;

empPtr=&s;
empPtr->getEmpData("Sachitha","saa",10);
s.getSupData();
cout<<"Supa"<<empPtr->paySalary()<<endl;
return 0;
}

