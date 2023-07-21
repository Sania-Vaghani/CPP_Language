/*Give an example which shows Exception handling of division by zero exception.*/

#include<iostream>
using namespace std;

int main()
{
	int a=2357;
	int b=0;
	int c;
	try{
		if(b==0){
			throw 0;
		}else{
			c=a/b;
			cout<<"Ans is :- "<<c<<endl;
		}
	}
	catch(int n){
		cout<<"ERROR(The Number Cannot Be Divisible ny Zero)";
	}
	
	return 0;
}
