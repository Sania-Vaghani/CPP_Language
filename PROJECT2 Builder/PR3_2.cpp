#include<iostream>
using namespace std;

class Mother{
	public:
		void display()
		{
			cout<<"Hello I am Mother..."<<endl;
		}
};

class Daughter : public Mother{
	public :
		void display()
		{
			cout<<"Hello I am Daughter..."<<endl;
		}
};

int main()
{
	Daughter d1;
	d1.Mother :: display();
	d1.Daughter :: display();
}
