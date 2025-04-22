#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr[]={5,2,4,3,1,2,3,2,1,1};
	vector<int> v(arr, arr+sizeof(arr)/sizeof(int));
	int target;
	
	cout<<"Enter a number :";
	cin>>target;
	
	int c = count(v.begin(), v.end(), target);
	
	cout<<"Count :"<<c;
		
	return 0;	
}
