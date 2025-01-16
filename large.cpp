#include<iostream>

class large
{
	public :
		int num1;
		int num2;
		int num3;
		int large;
		
		void get()
		{
			std::cout<<"Enter three numbers :";
			std::cin>>num1>>num2>>num3;
		}
		void compare()
		{
			if(num1 > num2 && num1 > num3)
				large=num1;
			else if(num2 > num3)
				large=num3;
			else
				large=num3;		
		}
		void show()
		{
			std::cout<<"largest number :"<<large;
		}
};

int main()
{
	large l;
	l.get();
	l.compare();
	l.show();
}
