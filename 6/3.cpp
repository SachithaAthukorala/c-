#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
	string name;
	string regNo;
	int indexNo;
	int rate;
	
public:	   
	void getData(){	   
		cout<<"Name	:";
		cin>>name;
		cout<<"Registratin No :";
		cin>>regNo;
		cout<<"Index No :";
		cin>>indexNo;
		cout<<"\n"<<endl;
	}
	
	friend void displayStudentData(Student& stu);
};


class ICTStudent:public Student{
private:
	float attendance;
	const float workingDays;
public:	   
	ICTStudent():workingDays(90){
	cout<<"ICT Data\n";
		getData();
		selectionCriteria();
	}
	
	void selectionCriteria(){
	 cout<<"Enter Attendance : ";
	 cin>>attendance;
	 cout<<endl;
	 cout<<endl;
	 rate = static_cast<int>((attendance/workingDays)*100);

	}
	
};

class HPTStudent:public Student{
private :
	float noOfCompletedFieldActivity;
	const float noOfActivities;
public:	   
	HPTStudent():noOfActivities(10){
	cout<<"HPT Data\n";
		getData();
		fieldActivityEvaluation();
	}
	
	void fieldActivityEvaluation(){
		cout<<"Enter number of completed activities : ";
	 	cin>>noOfCompletedFieldActivity;
		cout<<endl;
		cout<<endl;
		rate=static_cast<int>((noOfCompletedFieldActivity/noOfActivities)*100);
		
	}
};

void displayStudentData(Student& stu){
	cout<<"Name	:"<<stu.name<<endl;
	cout<<"Registration No	"<<stu.regNo<<endl;
	cout<<"Index	:"<<stu.indexNo<<endl;
	cout<<"Rate		:"<<stu.rate<<"%"<<endl;
	
	if(stu.rate>80){
	 	cout<<stu.name<<" SELECTED FOR THE TRAINING"<<endl;
	}else{
	 	cout<<stu.name<<" NOT SELECTED FOR THE TRAINING"<<endl;
	}
}

int main(){
ICTStudent ict;
displayStudentData(ict);
cout<<"\n"<<endl;
HPTStudent hpt;
displayStudentData(hpt);
return 0;
}

