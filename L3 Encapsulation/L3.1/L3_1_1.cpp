#include<iostream>
using namespace std;

class Student
{
	private:
	  	int stu_id;
	    char stu_name[100];
        int stu_age;
        char stu_course[100];
 		char stu_email[100];
 		char stu_city[100];
 		char stu_college[100];
 		
 	    public:
		GetData()
		{
			cout<<"Enter Id : ";
			cin>>stu_id;
			cout<<"Enter Name : ";
			cin>>stu_name;
			cout<<"Enter Age : ";
			cin>>stu_age;
			cout<<"Enter Course : ";
			cin>>stu_course;
			cout<<"Enter Email : ";
			cin>>stu_email;
			cout<<"Enter City : ";
			cin>>stu_city;
			cout<<"Enter College : ";
			cin>>stu_college;	
		}	
		SetData()
		{
			cout<<"\nId : "<<stu_id<<endl;
            cout<<"Name : "<<stu_name<<endl;
			cout<<"Age : "<<stu_age<<endl;
			cout<<"Course : "<<stu_course<<endl;
        	cout<<"Email : "<<stu_email<<endl;
			cout<<"City : "<<stu_city<<endl;
			cout<<"College : "<<stu_college<<endl<<endl;
		
		}
};
int main()
{
	Student s1,s2,s3,s4,s5;
	
    s1.GetData();
    cout<<"-------------------------\n";  
    s2.GetData();
    cout<<"-------------------------\n";
    s3.GetData();
    cout<<"-------------------------\n";
    s4.GetData();
    cout<<"-------------------------\n";
    s5.GetData();
    cout<<"-------------------------\n"<<endl;
    s1.SetData();
    s2.SetData();
    s3.SetData();
    s4.SetData();    
    s5.SetData();
}
