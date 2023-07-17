#include<iostream>
using namespace std;

class Admin{
	public:
	string company_name = "Androtech";
	int total_staff = 300;
	
	protected:
	int manager_salary = 50000;
	int employee_salary = 25000;
	
	private:	
	int total_annual_revenue = 2500000;
	int can_terminate;
};

class Manager : public Admin{
	public:
	MyAccess()
	{
		cout<<"Manager Salary : "<<manager_salary<<endl;
		cout<<"Employee Salary : "<<employee_salary<<endl;
	}
};

class Employee : public Admin{
	public:
	MyAccess()
	{
		cout<<"Company Name : "<<company_name<<endl;
		cout<<"Total Staff : "<<total_staff<<endl;
	}
};

int main()
{
	Manager m;
	Employee e;
	
	m.MyAccess();
	e.MyAccess();
	
	return 0;
}
