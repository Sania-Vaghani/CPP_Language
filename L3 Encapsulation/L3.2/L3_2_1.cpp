#include<iostream>
using namespace std;

class Hotels
{
	private:
	int hotel_id;
	char hotel_name[100];
	char hotel_type[100];
	int hotel_rating;
    int hotel_establish_year;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	
	public:	
	void GetData()
	{
    	cout<<"Enter Hotel Id : ";
		cin>>hotel_id;
		cout<<"Enter Hotel Name : ";
		cin>>hotel_name;
		cout<<"Enter Type : ";
		cin>>hotel_type;
		cout<<"Enter Rating : ";
		cin>>hotel_rating;
		cout<<"Hotel Establish Year : ";
		cin>>hotel_establish_year;
		cout<<"Enter Hotel Staff Quantity : ";
		cin>>hotel_staff_quantity;
		cout<<"Enter Hotel Room Quantity : ";
		cin>>hotel_room_quantity;		
	}
	
	static char hotel_location[100];
	
	void SetData()
	{
		cout<<"Hotel Id : "<<hotel_id<<endl;
		cout<<"Hotel Name : "<<hotel_name<<endl;
		cout<<"Type : "<<hotel_type<<endl;
		cout<<"Hotel Rating : "<<hotel_rating<<" Star"<<endl;
		cout<<"Hotel Location : "<<hotel_location<<endl;
		cout<<"Hotel Eastablish Year : "<<hotel_establish_year<<endl;
		cout<<"Hotel Staff Quantity : "<<hotel_staff_quantity<<endl;
		cout<<"Hotel Room Quantity : "<<hotel_room_quantity<<endl;
	}	
};

char Hotels :: hotel_location[100] = "Surat";

int main()
{
	int n,i;
	cout<<"Enter Numbers of Hotel : ";
	cin>>n;
	cout<<endl;
	
	Hotels h[n];
	for(i=0;i<n;i++)
	{
		h[i].GetData();
		cout<<"-------------------"<<endl;
    }
    cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
    	h[i].SetData();
    	cout<<"-------------------"<<endl;
	}
}
