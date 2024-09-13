#include<iostream>

using namespace std;

class Animals{
public:
	virtual void speak(){
		cout<<"Animals Can Speak";
	}
};

class Human:public Animals{
public:
	void speak(){
		cout<<"Now Speak"<<endl;
	}
};

class Duck:public Animals{
public:
	void speak(){
		cout<<"Quak"<<endl;
	}
};

class Dog:public Animals{
public:
	void speak(){
		cout<<"Woof"<<endl;
	}
};

class Cat:public Animals{
public:
	void speak(){
		cout<<"Meow"<<endl;
	}
};


int main(){
Animals animal;
Human h;
Duck duck;
Dog d;
Cat c;


animal.speak();
h.speak();
duck.speak();
d.speak();
c.speak();

return 0;
}

