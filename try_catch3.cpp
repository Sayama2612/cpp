#include<stdexcept>
#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Enter age :";
	cin>>age;
	
	try
	{
		if(age<0)
			throw age;
			
		if(age == 0)
			throw "Entered age is zero";
			
		cout<<"Age entered is valid :"<<age;			
	}
	catch(const int age)
	{
		cout<<"Error : entered age is negative "<<age;
	}
	catch(const char *ptr)
	{
		cout<<"Error : "<<ptr;
	}
	return 0;
}
