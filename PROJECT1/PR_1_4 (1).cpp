//WAP to create a class which Read and Print House details along with Room details.

#include<iostream>
using namespace std;

class House
{
	public:
	int room;
	int kitchen;
	int hall;
	int garden;
	int swiming_pool;
};

class Room
{
	public:
	int bed1;
	int bathroom1;
	int balcony1;
	int tv1;
	
	int bed2;
	int bathroom2;
	int tv2;
	
	int bed3;
	int bathroom3;
	int balcony3;
	int tv3;
	
	int bed4;
	int bathroom4;
	int balcony4;
	int tv4;
};

int main()
{
	House h1;
	Room r1,r2,r3,r4;
	
	h1.room = 4;
    h1.kitchen = 1;
	h1.hall = 1;
	h1.garden = 2;
	h1.swiming_pool = 1;
    r1.bed1=1;
	r1.bathroom1 = 1;
	r1.balcony1 = 2;
	r1.tv1 = 1;
	r2.bed2 = 2;
	r2.bathroom2 = 1;
    r2.tv2 = 1;
    r3.bed3 = 1;
	r3.bathroom3 = 1;
	r3.balcony3 = 1;
	r3.tv3 = 1;
	r4.bed4 = 1;
	r4.bathroom4 = 1;
	r4.balcony4 = 2;
	r4.tv4 = 2;
	
	
	cout<<"House Details"<<endl;
	cout<<"Number of Room : "<<h1.room<<endl;
	cout<<"Number of Kitchen : "<<h1.kitchen<<endl;
	cout<<"Number of Hall : "<<h1.hall<<endl;
	cout<<"Number of Garden : "<<h1.garden<<endl;
	cout<<"Number of Pool : "<<h1.swiming_pool<<endl;

	cout<<"\nRoom 1 Detail";
	
	cout<<"Number of Bed : "<<r1.bed1<<endl;
	cout<<"Number of Bathroom : "<<r1.bathroom1<<endl;
	cout<<"Number of Balcony : "<<r1.balcony1<<endl;
	cout<<"Number of TV : "<<r1.tv1<<endl;

	
	cout<<"\nRoom 2 Detail";
	
	cout<<"Number of Bed : "<<r2.bed2<<endl;
	cout<<"Number of Bathroom : "<<r2.bathroom2<<endl;
	cout<<"Number of TV : "<<r2.tv2<<endl;
	
    cout<<"\nRoom 3 Detail";
	
	cout<<"Number of Bed : "<<r3.bed3<<endl;
	cout<<"Number of Bathroom : "<<r3.bathroom3<<endl;
	cout<<"Number of Balcony : "<<r3.balcony3<<endl;
	cout<<"Number of TV : "<<r3.tv3<<endl;
	
	cout<<"\nRoom 4 Detail";
	
	cout<<"Number of Bed : "<<r4.bed4<<endl;
	cout<<"Number of Bathroom : "<<r4.bathroom4<<endl;
	cout<<"Number of Balcony : "<<r4.balcony4<<endl;
	cout<<"Number of TV : "<<r4.tv4<<endl;

    return 0;
}

