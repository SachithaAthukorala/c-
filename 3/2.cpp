#include<iostream>
#include<string>
using namespace std;

class Guitar{
	private:
		int Code;
		double unitPrice;
		string serialNo,Builder,Model,Type,backWood,topWood;
	public:
		Guitar(int code,string serialno,double unitprice,string builder,string model,string type,string backwood,string topwood){
			Code = code;
			unitPrice = unitprice;
			serialNo = serialno;
			Builder = builder;
			Model = model;
			Type = type;
			backWood = backwood;
			topWood = topwood;
		};
	void DisplayDetails(){
	
			cout<<"Guitar Details\n"<<endl;
			cout<<"Code		:"<<Code<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Serial No	:"<<serialNo<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Price		:Rs."<<unitPrice<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Builder		:"<<Builder<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Model		:"<<Model<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Type		:"<<Type<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Back Wood	:"<<backWood<<endl;
			cout<<"------------------------------"<<endl;
			cout<<"Top Wood	:"<<topWood<<endl;
			cout<<"------------------------------"<<endl;
	}	 

};


int main(){
	int code;
	string Builder ="Fender",model1 ="Stratocaster",type1 ="Electric",mat1 ="Teak",mat2 = "Alder";

	
  	Guitar guitar1(1,"GU12",19500.50,Builder,model1,type1,mat1,mat1);
	Guitar guitar2(2,"GU45PLM",27200.00,Builder,model1,type1,mat1,mat2);
	Guitar guitar3(3,"GU125M",22500.00,Builder,model1,type1,mat2,mat1);
	Guitar guitar4(4,"GU245XL",33900.00,Builder,model1,type1,mat2,mat2);
	
	cout<<"Enter Guitar Code : ";
	cin>>code;
	switch(code){
		case 1:
			guitar1.DisplayDetails();
			break;
		case 2:
			guitar2.DisplayDetails();
			break;
		case 3:
			guitar3.DisplayDetails();
			break;
		case 4:
			guitar4.DisplayDetails();
			break;
		default:
			"Not Valid Code";
			exit(0);
			break;
	}
	
return 0;
}

