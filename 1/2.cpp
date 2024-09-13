#include<iostream>
#include<string>

using namespace std;


char Grade(double avg){
char g;
	if(avg>=85){
		g='A';
	}else if(avg>=70){
		g='B';
	}else if(avg>=50){
		g='C';
	}else if(avg>=25){
		g='D';
	}else{
		g='W';
	}

return g;
}

int main(){

int marks[5],fullMark=0;
double avg;
char grade;
string name;
string sub[5];

cout<<"Welcome to My School Grading System\n\n"<<endl;
cout<<"Enter Your Name : ";
cin>>name;

for(int i=0; i<5; i++){
	cout<<"Enter Subject "<<i+1<<" Name	:";
	cin>>sub[i];
	cout<<"Enter "<<sub[i]<<" Marks	:";
	cin>>marks[i];
	cout<<"\n"<<endl;
}

for(int i=0;i<5;i++){
fullMark +=marks[i];
}

avg = (double)fullMark/5;

cout<<"The average of your mark is : "<<avg<<endl;

grade = Grade(avg);
cout<<"Hi "<<name<<", you have obtained the grade : "<<grade<<endl;

return  0;
}

