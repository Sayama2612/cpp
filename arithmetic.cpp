#include<iostream>

class arithmetic
{
	public :
		int a;
		int b;
		int sum;
		int diff;
		int mul;
		float div;
		
		void get()
		{
			std::cout<<"Enter two number :";
			std::cin>>a>>b;
		}
		
		void operation()
		{
			sum=a+b;
			diff=a-b;
			mul=a*b;
			div=(float)a/(float)b;
		}
		void show()
		{
			std::cout<<"Sum :"<<sum;
			std::cout<<"\nDifference :"<<diff;
			std::cout<<"\nMultiplication :"<<mul;
			std::cout<<"\nDivision :"<<div;	
		}
		
};

int main()
{
	arithmetic a;
	a.get();
	a.operation();
	a.show();
	
	
}
