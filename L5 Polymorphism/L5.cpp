#include<iostream>
using namespace std;
class Max{
	public:
	int a;
	void SetData(int x){
		this->a=x;
		
	}
	bool operator>(Max n){
		if(this->a>n.a){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	Max m1,m2;
	int n,m;
	
	cout<<"Enter First Number : "; cin>>n;
	cout<<"Enter Second Number : "; cin>>m; 
	m1.SetData(n);
	m2.SetData(m);
	
	if(m1>m2){
		cout<<"First Number is Max."<<endl;
	}else{
		cout<<"Second Number is Max."<<endl;
	}
	
	return 0;
}
