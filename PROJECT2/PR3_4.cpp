#include<iostream>
using namespace std;

class A{
	public :
		int id;
		char name[100];
		int salary;
		GetData()
		{			
			cout<<"Enter ID : "; cin>>id;
			cout<<"Enter Name : "; cin>>name;
			cout<<"Enter Salary : "; cin>>salary;
		}

};

class B {
	public :
		int experience;
		char role[100];
		char company_name[100]; 
		GetData()
		{
			cout<<"Enter Experience : "; cin>>experience;
			cout<<"Enter Role : "; cin>>role;
			cout<<"Enter Company Name : "; cin>>company_name;
		}
};

class C : public A , public B{
	public :
		SetData()
		{
			cout<<"ID\t\t: "<<id<<endl;
			cout<<"Name\t\t: "<<name<<endl;
			cout<<"Salary\t\t: "<<salary<<endl;
			cout<<"Experience\t: "<<experience<<endl;
			cout<<"Role\t\t: "<<role<<endl;
			cout<<"Company Name\t: "<<company_name<<endl;
		}
};

int main()
{
	C c1;
	c1.A :: GetData();
	c1.B :: GetData();
	cout<<"\n\n-------------------------"<<endl;
	c1.SetData();
    
    return 0;
}
