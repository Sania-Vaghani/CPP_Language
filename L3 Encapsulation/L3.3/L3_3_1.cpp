#include<iostream>
#include<string.h>
using namespace std;

class Diamond
{
	public:
	int comp_id;
	char comp_name[100];
	int comp_staff_quantity;
	int comp_revenue;
	int comp_import_raw_diamonds;
	int comp_export_diamonds;
	char comp_ceo[100]; 
	
	public:
	Diamond( int comp_id, char comp_name[100], int comp_staff_quantity, int comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds, char comp_ceo[100])
	{
		this-> comp_id = comp_id;
		strcpy(this-> comp_name ,comp_name);
		this-> comp_staff_quantity = comp_staff_quantity;
		this-> comp_revenue = comp_revenue;
		this-> comp_import_raw_diamonds = comp_import_raw_diamonds;
		this-> comp_export_diamonds = comp_export_diamonds;
		strcpy(this-> comp_ceo ,comp_ceo); 
	
		cout<<"Company Id = "<<this->comp_id<<endl;
		cout<<"Company Name = "<<this->comp_name<<endl;
		cout<<"Company Staff Quantity = "<<this->comp_staff_quantity<<endl;
		cout<<"Company Revenue = "<<this->comp_revenue<<endl;
		cout<<"Company Import Raw Diamonds = "<<this->comp_import_raw_diamonds<<endl;
		cout<<"Company Export Diamonds = "<<this->comp_export_diamonds<<endl;
		cout<<"Company CEO = "<<this->comp_ceo<<endl<<endl;
	}
};
class Diamond1
{
		private:	
		int id;
		char name[100];
		int staff;
		int revenue;
		int import;
		int c_export;
		char ceo[100];
		
		public:
		
		Diamond1()	
		{
			cout<<"Enter Company Id : ";
			cin>>id;
			cout<<"Enter Company Name : ";
			cin>>name;
			cout<<"Enter Number of Staff : ";
			cin>>staff;
			cout<<"Enter Company Revenue : ";
			cin>>revenue;
			cout<<"Enter Number of Raw Diamonds Imported : ";
			cin>>import;
			cout<<"Enter Number of Diamonds Exported : ";
			cin>>c_export;
			cout<<"Enter Company CEO : ";
			cin>>ceo;
			cout<<"------------------------"<<endl;
	    
			Diamond d2(id,name,staff,revenue,import,c_export,ceo);
	    }
};

int main()
{
	int n,i;
	cout<<"Enter Numbers of Diamond Company : ";
	cin>>n;
	cout<<endl;

	Diamond1 d[n];
    return 0;
}
