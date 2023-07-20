#include<iostream>
using namespace std;

class A{
	public:
	Method()
	{
		cout<<"Hello, You called Class A.."<<endl;	
	}	
};

class B : virtual public A{
	public:
	Method()
	{
		cout<<"Hello, You called Class B.."<<endl;	
	}		
};

class C : virtual public A{
	public:
	Method()
	{
		cout<<"Hello, You called Class C.."<<endl;	
	}	
};

class D : public B,public C{
	public:
	Method()
	{
		cout<<"Hello, You called Class D.."<<endl;	
	}	
};

int main()
{
	D d1;
	d1.A :: Method();
	d1.B :: Method();
	d1.C :: Method();
}


