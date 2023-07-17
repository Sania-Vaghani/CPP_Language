/*WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods*/

#include<iostream>
using namespace std;

class X{
	public:
	int a;
	int b;
	int c;
};
class Y:public X
{
	
	public:
		int sum;
		
	GetData()
	{
		cout<<"Enter Value of a : ";
		cin>>a;
		cout<<"Enter Value of b : ";
		cin>>b;
		cout<<"Enter Value of c : ";
		cin>>c;
	}
	SetData()
	{
		sum=a+b+c;
		cout<<"Sum : "<<sum<<endl;
		cout<<"Cube : "<<sum*sum*sum<<endl;
	}

};
int main(){
		Y y1;
		y1.GetData();
		y1.SetData();
	return 0;

	
}
