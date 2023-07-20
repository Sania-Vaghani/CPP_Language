#include <iostream>
using namespace std;

class Garage{
	public:	
	Garage() 
	{	    
		cout<<"Your Error is Detected"<<endl<<endl;
	}
};

int main() 
{
	try 
	{
		Garage g;
	    throw 10;	
	}
 	catch (int i) 
	{
	   	cout<< "Your car's battery is low.";
	}
	return 0;
}

