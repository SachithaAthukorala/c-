#include<iostream>
#include<string>


using namespace std;

class Book{

private:
	static int counter;
	int pid;
	float price;
	string name;
public:
	Book():price(0.00),name("OOP"),pid(90){
		counter++;
	}
	Book(float p, string n,int pubId):price(p),name(n),pid(pubId){
		counter++;
	}
	
	void DisplayData() const{
		cout<<"Book Name : "<< name<<endl;
		cout<<"Price	: "<<price<<endl;
		cout<<"Pid	  : "<<pid<<endl;
	}
	
	void DisplayData2(Book& b){
		b.pid+=3;
		b.DisplayData();
	}
	
	static int getCount(){
		return counter;
	}	 
};

int Book::counter=0;

int main(){
	Book b;
	Book b1(1250.53,"Java with Ant",121);
	Book b2(500,"c++ with Ant",231);
	const Book b3(1200,"Maths",11);
	
	cout<<"Book 1"<<endl;
	b1.DisplayData();
	cout<<endl;
	
	cout<<"Book 2"<<endl;
	b2.DisplayData();
	cout<<endl;
	
	cout<<"Book def"<<endl;
	b.DisplayData();
	cout<<endl;
	
	cout<<"const value book"<<endl;
	b3.DisplayData();
	
	b.DisplayData2(b1);
	
	cout<<"No of All Books : "<<Book::getCount()<<endl;

return 0;
}

