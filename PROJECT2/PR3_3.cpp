#include<iostream>
using namespace std;

class Mother{
	public:
	int age;
	string name;	
};

class Zebra:public Mother
{
	public:
		void SetData()
		{
			cout<<"Hello..."<<endl;
			Mother :: name= "Zebra";
			Mother :: age = 12;
			cout<<"My Name is : "<<name<<endl;
			cout<<"My Age is : "<<age<<" years"<<endl;
    	}	
};

class Dolphin:public Mother
{
	public:
		void SetData()
		{
			cout<<endl<<"Hello..."<<endl;
			Mother :: name = "Dolphin";
			Mother :: age = 18;
			cout<<"My Name is : "<<name<<endl;
			cout<<"My Age is : "<<age<<" years"<<endl;
    	}	
};

int main()
{
	Zebra z1;
	Dolphin d1;
	
	z1.SetData();
	d1.SetData();
}

