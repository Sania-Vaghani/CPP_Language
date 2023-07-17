#include<iostream>
using namespace std;

class A{
	protected :
		virtual void calculate(int a) = 0; 	
};
class B : public A {
	public :
		int a,b;
		public:
			void calculate(int a)
			{
				switch(a)
				{
					case 1 :
						cout << "Enter the Radius of Circle : " ;
						cin >> a;
						cout << "Area of Circle is : " << 3.14*a*a << endl;
						break;
					case 2 : 
						cout << "Enter the Base of Triangle : ";
						cin >> a;
						cout << "Enter the Height of Triangle : ";
						cin >> b;
						cout << "Area of Triangle is : " << 0.5*a*b << endl;
						break;
					case 3 : 
						cout << "Enter the Length of Rectangle : ";
						cin  >> a;	
						cout << "Enter the Width of Rectangle : ";
						cin >> b;
						cout << "Area of Rectangle is : " << a*b << endl;
						break;
					default : cout << "Invalid..." << endl;
					}
			}
};
main()
{
	int user;
	while(true)
	{
		cout << "Enter 1 for Area of Circle. " << endl; 
		cout << "Enter 2 for Area of Triangle." << endl;
    	cout << "Enter 3 for Area of Rectangle." << endl;
		cout << "Enter your choice : ";
		cin >> user;
		cout<<endl;
		B b1;
		b1.calculate(user);
		cout<<"\n********************\n\n";	
	}
}
