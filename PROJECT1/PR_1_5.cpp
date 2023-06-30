// WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class Employees
{
	public: //public access modifier
    int id = 11;
	char name[100] = "Saniya Vaghani";
	char designation[100] = "Manager";
	
	private: //private access modifier
	int salary = 20000;		
};

int main()
{
	Employees e1;
	
	cout<<"Id : "<<e1.id<<endl;
	cout<<"Name : "<<e1.name<<endl;
	cout<<"Designation : "<<e1.designation<<endl;
	
    return  0;
}
