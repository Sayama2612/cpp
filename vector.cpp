#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr[]={2,4,1,6,5,3};
	vector<int> v(arr, arr+6);
	int c;
	sort(v.begin(), v.end());
	
	for(c=0;c<v.size();c++)
		cout<<v[c]<<" ";
		
	return 0;	
}
