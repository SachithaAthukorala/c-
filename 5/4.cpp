#include<iostream>

using namespace std;

class Distance{
private:
	int feet;
	float inches;
	static const float MTF;
public:
	Distance():feet(0),inches(0){}
	
	Distance(float meter){
		float f= MTF*(meter);
		feet= static_cast<int>(f);
		inches = (f-feet)*12;
		showdist();
	}
	
	operator float() const{
		float f=inches/12;
		f+=static_cast<float>(feet);
		return f/MTF;
	}
	
	void showdist(){
		cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
	}
	
};

const float Distance::MTF=3.28;

int main(){
Distance d(145);

float meters = static_cast<float>(d);
    cout << "Distance in meters: " << meters << endl;
return 0;
}

