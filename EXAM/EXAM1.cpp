/* Write a C++ program to print factorial series using recursion.*/

#include<iostream>
using namespace std;

main()
{
	int j,i,n,fact=1;
	cout<<"Enter Number : "; cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(i=1,j=1;i<=n;i++,j++)
		{
			fact = fact * i;
			cout<<"Factorial of "<<j<<" is : "<<fact<<endl;
		}
		n--;
	}
	return main() ;
}
