#include<iostream>
#include<string.h>
using namespace std;

class Supermarket
{
	private:
		int id=101;
		int user_id;
		char pass[100] = "1011";
		char user_pass[100];
		
	public:
		
		Authentication()
		{
			while(true)
			{
				cout<<"Enter ID : "; cin>>user_id;
				cout<<"Enter Password : "; cin>>user_pass;
			
				if(user_id==id)
        		{	if(strcmp(user_pass,pass) ==0)
    				{
		   		 		cout<<"\nLogin Successful..."<<endl<<endl;break;
        			}
    			}else	{
    				cout<<"***************************************";
					cout<<"\nLogin Failed.Invalid Credentials...\n"<<endl;
				}
			}
		}
		Items()
		{
			string a[50] = {"Bananas","Apples",	"Bread","Milk","Eggs","Cheese","Yogurt","Carrots","Tomatoes","Broccoli","Rice","Cereal","Sugar","Salt","Flour"}; 
			double b[10] = {40,45,75,85,100,86,200,70,80,150};
			string c[50] = {"kg","kg","dozen","litre","dozen","kg","litere","kg","kg","kg","kg","kg","kg","kg","kg"};
			int itemNum,i,itemQuantity=0,itemPrice=0,itemDiscount;
			char itemName[100];

			for(i=0;i<10;i++) {
        	cout<<"Item "<<i+1<<": "<<a[i]<<", "<<b[i]<<" rupees per "<<c[i]<<endl;
    		}
    		cout<<"\t\n\n--------------------------------"<<endl;
    		cout<<"\t-: Add Items to your Bag :-"<<endl;
    		cout<<"\t--------------------------------"<<endl;
    		cout<<"ENTER ITEAM NUMBER : ";
			cin>>itemNum;
			cout<<"ENTER ITEAM NAME : ";
			cin>>itemName;
			cout<<"ENTER Quantity : ";
			cin>>itemQuantity;
			cout<<"ENTER PRICE : ";
			cin>>itemPrice; 
    		cout<<"\n\n**************************************"<<endl;
			cout<<"\t -: Your Bill :- "<<endl;
			cout<<"**************************************"<<endl;
			cout<<"ITEAM NUMBER : "<<itemNum<<endl;
			cout<<"ITEAM NAME : "<<itemName<<endl;
			cout<<"ITEAM Quantity : "<<itemQuantity<<"kg"<<endl;
			cout<<"ITEAM PRICE : "<<itemPrice<<endl;
			cout<<"DISCOUNT : 10%"<<endl;
			itemPrice = itemPrice*itemQuantity;
			itemDiscount = itemPrice-(itemPrice/10); 
			cout<<"**********Total Price***************"<<endl;
			cout<<"TOTAL : "<<itemPrice<<endl;
			cout<<"**********Bill With Discount**********"<<endl;
			cout<<"BILL : "<<itemDiscount<<endl;	
		}
		
};
int main()
{
	cout<<"...~...~...~...~...~...~...~...~...~...~...~";
	cout<<"\n\t-: Supermarket Billing System :-";
	cout<<"\n...~...~...~...~...~...~...~...~...~...~...~"<<endl<<endl;
	
	Supermarket s1;
	s1.Authentication();
	s1.Items();
}
