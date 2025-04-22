#include<iostream>

int main()
{
	int r=3,i;
	int c=3,j;
	int m[r][c];
	int n;
	
	std::cout<<"Enter elements of matrix :";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			std::cin>>m[i][j];
	}
	
	std::cout<<"Enter nth element :";
	std::cin>>n;
	
	std::cout<<"element is "<<m[n/r][(n%c)-1];
}
