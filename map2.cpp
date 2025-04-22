#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	map<string,string>phonebook;
	phonebook["janhavi"]="8421603567"
	phonebook["siya"]="8745326578"
	string name;
	cout<<"enter the name:";
	cin>>name;
	if	(phonebook.find(name)!=phonebook.end())
		cout<<name<<";"<<phonebook[name];
	else
	    cout<<name<<"not found.";
	    return 0;
}
