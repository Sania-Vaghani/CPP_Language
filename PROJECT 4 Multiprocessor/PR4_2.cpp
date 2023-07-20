#include<iostream>
using namespace std;

class Distance
{
	public:
	int feet;
	int inch;	
	void SetData()
	{
		cout<<"Enter Feet : ";
		cin>>feet;
		cout<<"Enter Inch : ";
		cin>>inch;
	}
	Distance operator+(Distance n)
	{
		Distance temp;
		temp.feet = feet + n.feet;
		temp.inch = inch + n.inch;
		while(temp.inch >= 12)
		{
			temp.inch-=12;
			temp.feet++;
		}
		return temp;
	}
	void GetData()
	{
		cout <<"\nSum of distances = "<<feet<<" feet "<<inch<<" inch";
	}
};
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter First Distance"<<endl;
	d1.SetData();
	cout<<"\nEnter Second Distance"<<endl;
	d2.SetData();
	d3=d1+d2;
	d3.GetData();
}

