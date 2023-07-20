#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter Your Age : "; cin>>age;
	try{
		if(age<18){
			throw 2.5;
		}else{
			cout<<"\nYou Can Vote...";
		}
	}
	catch(...){
		cout<<"\nYou Cannot Vote...";
	}
	
	return 0;
}
