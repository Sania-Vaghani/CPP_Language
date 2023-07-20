#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char password[20];
	cout << "Enter Password : "; cin >> password;
	int l;
	l= strlen(password);
	int upr =0;
	try
	{
		for(int i=0 ; i<=l ; i++)
		{
			if(password[i] >= 65 && password[i] <= 90)
			{
				upr ++;
			}
		}
		if (upr>0)
		{
			throw password;
		}else{
			cout << "Invalid password." << endl;
		}
	}
	catch(...)
	{
		cout << "Valid password.." << endl;
	}

	return 0;
}
