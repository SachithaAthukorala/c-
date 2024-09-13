#include<iostream>
#include<string>
using namespace std;

class Book{
private:
 	static int counter;
	int bookID;
	float price;
	string name;
	
public:
	Book():price(0.0),name("OOP"){
		counter++;
		bookID=counter;
	}
	Book(float p,string n):price(p),name(n){
		counter++;
		bookID=counter;
	}
	
	void DisplayData(){
		cout<<"Book Name : "<< name<<endl;
		cout<<"Price	: "<<price<<endl;
		cout<<"Book ID	: "<<bookID<<endl;
	}
	
	static int getCount(){
		return counter;
	}	 
};

int Book::counter =0;

int main(){
	Book b;
	Book b1(1250.53,"Java with Ant");
	Book b2(500,"c++ with Ant");
	
	cout<<"Book 1"<<endl;
	b1.DisplayData();
	cout<<endl;
	
	cout<<"Book 2"<<endl;
	b2.DisplayData();
	cout<<endl;
	
	cout<<"Book def"<<endl;
	b.DisplayData();
	cout<<endl;
	
	cout<<"No of All Books : "<<Book::getCount()<<endl;

return 0;
}

