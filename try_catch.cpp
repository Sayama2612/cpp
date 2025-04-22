#include<stdexcept>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	
	cout<<"Enter two no. for division :";
	cin>>a>>b;
	
	try
	{
		if(b == 0)
			throw "Divide by zero";
			
		c = a / b;
		cout<<"Ans :"<<c<<endl;	
	}
	catch(const string *ptr){
		cout<<"Error :"<<ptr;
	}
	return 0; 
}
