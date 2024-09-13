#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	string regNo;
	int indexNo;
	
public:	   
	void getData(){	   
		cout<<"Name	:	";
		getline(cin,name);
		cout<<"Registratin No :";
		getline(cin,regNo);
		cout<<"Index No :";
		cin>>indexNo;
		cin.ignore();
	}
	
friend void friendFunctionDisp(Student& obj);
	  
};

void friendFunctionDisp(Student& stu){
	cout<<"Name	:	"<<stu.name<<endl;
	cout<<"Registration	 "<<stu.regNo<<endl;
	cout<<"index	 "<<stu.indexNo<<endl;
}

int main(){
Student student;
student.getData();

friendFunctionDisp(student);
return 0;
}

