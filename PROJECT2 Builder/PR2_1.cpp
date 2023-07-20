#include<iostream>
using namespace std;

class Train
{
	private:
		int trainNumber,user_input;
		char trainName[100],source[100],destination[100],trainTime[100];
		
	public:	
	Addtrain()
	{
		cout<<"***************************************************************"<<endl;
		cout<<"\t-: You are Adding the Train Details Now :-\n\n";
	    cout<< "\tEnter Train Number: ";
 	   	cin>>trainNumber;
	
  	 	cout<<"\tEnter Train Name: ";
   	    cin>>trainName;

  	    cout<<"\tEnter Source: ";
   	    cin>>source;

	    cout<<"\tEnter Destination: ";
	    cin>>destination;

	    cout<<"\tEnter Train Time: ";
 	    cin>>trainTime;

 		cout<<"\nYour Train Number is Sucessfully Added..."<<endl;
		cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._";
		cout<<"\n\t\t  Train Number\t : "<<trainNumber;
		cout<<"\n\t\t  Train Name\t : "<<trainName;
		cout<<"\n\t\t  Arriving at\t : "<<trainTime;
		cout<<"\n\t\t  Route\t : From "<<source<<" to "<<destination;
      	cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._\n"<<endl;
	}
	Displaytrain()
	{
		cout<<"***************************************************************"<<endl;
		cout<<"\n\tEnter Train Number: ";
 	   	cin>>user_input;	
		if(user_input==trainNumber)
		{
			cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._";
			cout<<"\n\t\t  Train Number\t : "<<trainNumber;
			cout<<"\n\t\t  Train Name\t : "<<trainName;
			cout<<"\n\t\t  Arriving at\t : "<<trainTime;
			cout<<"\n\t\t  Route\t : From "<<source<<" to "<<destination;
      		cout<<"\n\t..._..._..._..._..._..._..._..._..._..._..._..._\n"<<endl;
		}	
		else
		{
			cout<<"\n\tYour Train Number is not found..."<<endl<<endl;
		}
	}	
};

int main()
{
	Train t1;
	int choice,number; 
	
	cout<<"...~...~...~...~...~...~...~...~...~...~...~";
	cout<<"\n\t-:Railway Reservation System :-";
	cout<<"\n...~...~...~...~...~...~...~...~...~...~...~"<<endl<<endl;
	while(true)
	{
		cout<<"Press [1] to Add Train Details"<<endl;
		cout<<"Press [2] to Display Train Record By Searching Train Number"<<endl;
		cout<<"Press [3] to Exit"<<endl;
		cout<<"Enter : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			t1.Addtrain();
			break; 
			
	    	case 2:
	   		t1.Displaytrain();
 	   		break;
 	   		
 	   	    case 3:
 	   	    cout<<"\n\n***********************************************************"<<endl;	
 	   		cout<<"Thank You for using Railway Reservation System...";
			exit(0);
				
		    default :
			cout<<"Invalid choice! Try again."<<endl;
			break;
		}
	}
	return 0;
}
