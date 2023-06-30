	#include<iostream>
using namespace std;

class Cafe
{
	private:
	int cafe_id;
	char cafe_name[100];
	char cafe_type[100];
	int cafe_rating;
	char cafe_location[100];
    int cafe_establish_year;
	int cafe_staff_quantity;
	public:
	Cafe()
	{
		
    	cout<<"Enter Cafe Id : ";
		cin>>cafe_id;
		cout<<"Enter Cafe Name : ";
		cin>>cafe_name;
		cout<<"Enter Type : ";
		cin>>cafe_type;
		cout<<"Enter Rating : ";
		cin>>cafe_rating;
		cout<<"Enter Cafe Location : ";
		cin>>cafe_location;
		cout<<"Cafe Establish Year : ";
		cin>>cafe_establish_year;
		cout<<"Enter Cafe Staff Quantity : ";
		cin>>cafe_staff_quantity;
		cout<<"\n\n";
		cout<<"Hotel Id : "<<cafe_id<<endl;
		cout<<"Hotel Name : "<<cafe_name<<endl;
		cout<<"Type : "<<cafe_type<<endl;
		cout<<"Hotel Rating : "<<cafe_rating<<" Star"<<endl;
		cout<<"Hotel Location : "<<cafe_location<<endl;
		cout<<"Hotel Eastablish Year : "<<cafe_establish_year<<endl;
		cout<<"Hotel Staff Quantity : "<<cafe_staff_quantity<<endl<<endl;
		cout<<"------------------------"<<endl;
		
	}
};

int main()
{
	int n,i;
	cout<<"Enter Numbers of Cafe : ";
	cin>>n;
	cout<<endl;
	
	Cafe c[n];
	return 0;
}
