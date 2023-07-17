#include<iostream>
using namespace std;

class Shape
{
	public:
	int height;
	int width;	
};
class Triangle:public Shape
{
	public:
	GetData()
	{			
		cout<<"Enter Height of Triangle : "; 
		cin>>height;
		cout<<"Enter Width of Triangle : "; 
		cin>>width;
	}
	void Area()
	{
		cout<<"Area of Triangle is : "<<width*height<<endl;
	}	
};
class Rectangle:public Shape
{
	public:
	GetData()
	{			
		cout<<"Enter Height of Rectangle : "; 
		cin>>height;
		cout<<"Enter Width of Rectangle : "; 
		cin>>width;
	}
	void Area()
	{
		cout<<"Area of Rectangle is : "<<0.5*width*height<<endl;
	}	
};
int main()
{
	Triangle t1;
	Rectangle r1;

	t1.GetData();
	t1.Area();
	cout<<"\n***************************"<<endl<<endl;
	r1.GetData();
	r1.Area();

	return 0;
}

