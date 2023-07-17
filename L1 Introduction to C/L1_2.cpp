#include<iostream>
using namespace std;

class Car
{  
    public:
    int car_id;
    char car_company_name[100];
    char car_color[100];
    char car_model[100];
    int car_release_year;
};

main()
{
	Car c1,c2,c3,c4;
	
	cout<<"Enter id : ";
	cin>>c1.car_id;
	cout<<"Enter Company Name : ";
	cin>>c1.car_company_name;
	cout<<"Enter Color : ";
	cin>>c1.car_color;	
	cout<<"Enter Model : ";
	cin>>c1.car_model;
	cout<<"Enter Release Year : ";
	cin>>c1.car_release_year;

	cout<<"\nEnter id : ";
	cin>>c2.car_id;
	cout<<"Enter Company Name : ";
	cin>>c2.car_company_name;
	cout<<"Enter Color : ";
	cin>>c2.car_color;	
	cout<<"Enter Model : ";
	cin>>c2.car_model;
	cout<<"Enter Release Year : ";
	cin>>c2.car_release_year;
	
	cout<<"\nEnter id : ";
	cin>>c3.car_id;
	cout<<"Enter Company Name : ";
	cin>>c3.car_company_name;
	cout<<"Enter Color : ";
	cin>>c3.car_color;	
	cout<<"Enter Model : ";
	cin>>c3.car_model;
	cout<<"Enter Release Year : ";
	cin>>c3.car_release_year;
	
	cout<<"\nEnter id : ";
	cin>>c4.car_id;
	cout<<"Enter Company Name : ";
	cin>>c4.car_company_name;
	cout<<"Enter Color : ";
	cin>>c4.car_color;	
	cout<<"Enter Model : ";
	cin>>c4.car_model;
	cout<<"Enter Release Year : ";
	cin>>c4.car_release_year;

}
