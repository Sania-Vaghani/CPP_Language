#include<iostream>
using namespace std;

class A{
	public:
	int id,salary,experience,contact;
	char name[100],role[100],comp_name[100],address[100],email[100]; 
	SetData()
	{
		cout<<"Id : "<<id<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Role : "<<role<<endl;
	}
};

class B : public A{
	public:
	SetData()
	{
		cout<<"Salary : "<<salary<<endl;
		cout<<"Experience : "<<experience<<endl;
	}
};

class C : public B{
	public:
	GetData()
	{
		cout<<"Name : "; cin>>name;
		cout<<"Role : "; cin>>role;
		cout<<"Salary : "; cin>>salary;
	}
	SetData()
	{
		cout<<"Company Name : "<<comp_name<<endl;
		cout<<"Address : "<<address<<endl;
	}
};

class D : public C{
	public:
	GetData()
	{
		cout<<"Id : "; cin>>id;
		cout<<"Name : "; cin>>name;
		cout<<"Role : "; cin>>role;
		cout<<"Salary : "; cin>>salary;
		cout<<"Experience : "; cin>>experience;
		cout<<"Company Name : "; cin>>comp_name;
		cout<<"Address : "; cin>>address;
		cout<<"Email : "; cin>>email;
		cout<<"Contact : "; cin>>contact;
	}
	SetData()
	{
		cout<<"Email : "<<email<<endl;
		cout<<"Contact : "<<contact<<endl;
	}
};

int main()
{
    D d1;
    
	d1.GetData();
	cout<<"\n\n**********************************"<<endl;
	d1.A :: SetData();
	d1.B :: SetData();
	d1.C :: SetData();
	d1.SetData();
	
	return 0; 
}
