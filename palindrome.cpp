#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	string str1,str2;
	cout<<"Enter a string :";
	gets(str1);
	cout<<str1;
	int len=strlen(str1);
	for(i=0;i<len;i++)
		str2[i]=str1[len-i-1];
	
	i=strcmp(str1,str2);
	if(i == 0)
		cout<<"Palindrome";
	else 
		cout<<"Not Palindrome";	
}
