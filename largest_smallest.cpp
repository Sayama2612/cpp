#include<iostream>

int main()
{
	int size;
	std::cout<<"Enter size of array :";
	std::cin>>size;
	
	int arr[size];
	int i;
			
	std::cout<<"Enter elements :";
	for(int i=0;i<size;i++)
			std::cin>>arr[i];
			
	int large=arr[0];
	for(i=0;i<size;i++)
	{
		if(large < arr[i])
			large=arr[i];
	}
	
	int small=arr[0];
	for(i=0;i<size;i++)
	{
		if(small > arr[i])
			small=arr[i];
	}
	
	std::cout<<"Largest element :"<<large<<"\n";
	std::cout<<"Smallest element :"<<small;

}
