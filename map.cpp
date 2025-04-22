#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<string,string> phoneBook;
	phoneBook["Sam"] = "2104536987";
	phoneBook["Pubs"] = "2478965910";
	string name;
	
	cout<<"Enter name :";
	cin>>name;
	
	if(phoneBook.find(name) != phoneBook.end())
		cout<<name<<" : "<<phoneBook[name];
	else
		cout<<name <<" not found.";
		
	return 0;	
}
