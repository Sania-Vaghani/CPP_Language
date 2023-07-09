#include<iostream>
using namespace std;

class Number{
	public:
	int num;
};

class Square : public Number{
	public:
	GetData()
	{
		cout<<"Enter a Number to do Square of Number : "; cin>>num;
	}
	SetData()
	{
		cout<<"Sqaure : "<<num*num<<endl;
	}
};

class Cube : public Number{
	public:
	GetData()
	{
		cout<<"Enter a Number to do Cube of Number : "; cin>>num;
	}
	SetData()
	{
		cout<<"Cube : "<<num*num*num;
	}
};

int main()
{
	Number n1;
	Square s1;
	Cube c1;

	s1.GetData();
	s1.SetData();
	c1.GetData();
	c1.SetData();
	return 0;
}


