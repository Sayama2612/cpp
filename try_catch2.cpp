#include<stdexcept>
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {2,4,6,8,10}, c;
	cout<<"Enter index value (0-4) :";
	cin>>c;
	
	try{
		if(c < 0 || c > 4){
			throw c;/*out_of_range("Invalid Index");*/
		}
			
		
		cout<<"Element is :"<<arr[c];	
	}
	catch(int c)/*out_of_range &obj)*/{
		c = c % 5;
		cout<<"Element is :"<<arr[c];//cout<<"Error :"<<obj.what();
	}
	return 0; 
}
