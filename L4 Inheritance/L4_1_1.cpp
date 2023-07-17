#include<iostream>
using namespace std;

class Sbi{
	public:
	int interest=2;
	void function_S(){
	cout<<"interest of SBI : "<<interest<<endl;
	}
};
class Bob{
	public:
	int interest=3;
	void function_B(){
	cout<<"interest of BOB : "<<interest<<endl;
	}
};
class Icici{
	public:
	int interest=1;
	void function_I(){
	cout<<"interest of ICICI : "<<interest<<endl;
	}
};
class Rbi:public Sbi,public Bob,public Icici
{
	
};
int main(){
	Rbi r1;
	r1.function_S();
	r1.function_B();
	r1.function_I();
	return 0;
}
