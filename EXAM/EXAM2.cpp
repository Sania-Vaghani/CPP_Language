/*Array Of Object (Bank Management System) 
Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) 
Search Record By A/C Number.*/

#include<iostream>
using namespace std;

class Bank
{
	private:
		int accNumber,user,balance;
		char accName[100],accType[100],branch[100];
		
	public:	
	Addacc()
	{
		cout<<"***************************************************************"<<endl;
		cout<<"\t-: You are Adding the Account Details Now :-\n\n";
	    cout<< "\tEnter Account Number: ";
 	   	cin>>accNumber;
	
  	 	cout<<"\tEnter Account Name: ";
   	    cin>>accName;

  	    cout<<"\tEnter Account Type : ";
   	    cin>>accType;

	    cout<<"\tEnter Branch: ";
	    cin>>branch;

	    cout<<"\tEnter Account Balance: ";
 	    cin>>balance;

 		cout<<"\nYour Account Details are Sucessfully Added..."<<endl;
		cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._";
		cout<<"\n\t\t  Account Number\t : "<<accNumber;
		cout<<"\n\t\t  Account Name\t\t : "<<accName;
		cout<<"\n\t\t  Account Type\t\t : "<<accType;
		cout<<"\n\t\t  Account Balance is\t : "<<balance;
      	cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._\n"<<endl;
	}
	DisplayRecord()
	{
		cout<<"***************************************************************"<<endl;
		cout<<"\n\tEnter Account Number: ";
 	   	cin>>user;	
		if(user==accNumber)
		{
			cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._";
			cout<<"\n\t\t  Account Number\t : "<<accNumber;
			cout<<"\n\t\t  Account Name\t : "<<accName;
			cout<<"\n\t\t  Account Type\t : "<<accType;
			cout<<"\n\t\t  Account Balance is\t : "<<balance;
      		cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._\n"<<endl;
		}	
		else
		{
			cout<<"\n\tYour Account Number is not found..."<<endl<<endl;
		}
	}	
};

int main()
{
	Bank b1;
	int choice,number; 

	while(true)
	{
		cout<<"Press [1] to Add Bank ACcount Details"<<endl;
		cout<<"Press [2] to Display Account Record By Searching Account Number"<<endl;
		cout<<"Press [3] to Exit"<<endl;
		cout<<"Enter : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			b1.Addacc();
			break; 
			
	    	case 2:
	   		b1.DisplayRecord();
 	   		break;
 	   		
 	   	    case 3:
 	   	    cout<<"\n\n***********************************************************"<<endl;	
 	   		cout<<"Thank You...";
			exit(0);
				
		    default :
			cout<<"Invalid choice! Try again."<<endl;
			break;
		}
	}
	return 0;
}
