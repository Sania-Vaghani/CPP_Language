// WAP to create a class to read and add two times.

#include<iostream>
using namespace std;

class Shoes
{
	public:
	int nike;
	int puma;
	int addidas;
	int skechers;
};
int main()
{
	Shoes s[2];
	int i;
	
	for(i=0;i<2;i++)
	{
		cout<<"Enter Nike : ";
		cin>>s[i].nike;
		cout<<"Enter Puma : ";
		cin>>s[i].puma;
		cout<<"Enter Addidas : ";
		cin>>s[i].addidas;
		cout<<"Enter Skechers : ";
		cin>>s[i].skechers;
	}
	
	cout<<"\n\n----------------------------------\n\n";
	
	for(i=0;i<2;i++)
	{
		cout<<"\n\nEnter Nike : "<<s[i].nike<<endl;
		cout<<"Enter Puma : "<<s[i].puma<<endl;
		cout<<"Enter Addidas : "<<s[i].addidas<<endl;
		cout<<"Enter Skechers : "<<s[i].skechers<<endl;
	}
	return 0;
}
