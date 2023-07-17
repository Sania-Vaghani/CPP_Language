#include<iostream>
using namespace std;

class A{
	public:
	int first_num;
};

class B : public A{
	public:
	int second_num;
};

class C : public A{
	public:
	int third_num;
};

class D : public B,public C{
	public:
	GetData()
	{
		cout<<"Enter First Number : "; cin>>B::first_num;
		cout<<"Enter Second Number : "; cin>>second_num;
		cout<<"Enter Third Number : "; cin>>third_num;	
	}	
	SetData()
	{
		cout<<endl<<"Sum of Two Numbers is : "<<B::first_num+second_num+third_num;	
 	}	
};

int main()
{
	D d1;
	d1.GetData();
	d1.SetData();
	return 0;
}
