#include<iostream>
using namespace std;

class Customer
{
	private:
		int cust_id;
		char cust_name[100];
		int cust_age;
		char cust_telecome_brand_name[100];
		int cust_mobile_number;
		char cust_city[100];
		int cust_simcard_validity;
 		
 	    public:
		GetData()
		{
			cout<<"Enter Id : ";
			cin>>cust_id;
			cout<<"Enter Name : ";
			cin>>cust_name;
			cout<<"Enter Age : ";
			cin>>cust_age;
			cout<<"Enter Telecome Brand Name : ";
			cin>>cust_telecome_brand_name;
			cout<<"Enter Mobile Number : ";
			cin>>cust_mobile_number;
			cout<<"Enter City : ";
			cin>>cust_city;
			cout<<"Enter Simcard Validity : ";
			cin>>cust_simcard_validity;	
		}	
		SetData()
		{
			cout<<"\nId : "<<cust_id<<endl;
            cout<<"Name : "<<cust_name<<endl;
			cout<<"Age : "<<cust_age<<endl;
			cout<<"Telecom Brand : "<<cust_telecome_brand_name<<endl;
        	cout<<"Mobile Number : "<<cust_mobile_number<<endl;
			cout<<"City : "<<cust_city<<endl;
			cout<<"Simcard Validity : "<<cust_simcard_validity<<" Years"<<endl<<endl;
		
		}
};
int main()
{
	Customer c1,c2,c3,c4,c5;
	
    c1.GetData();
    cout<<"-------------------------\n";  
    c2.GetData();
    cout<<"-------------------------\n";
    c3.GetData();
    cout<<"-------------------------\n";
    c4.GetData();
    cout<<"-------------------------\n";
    c5.GetData();
    cout<<"-------------------------\n"<<endl;
    c1.SetData();
    c2.SetData();
    c3.SetData();
    c4.SetData();    
    c5.SetData();

}
