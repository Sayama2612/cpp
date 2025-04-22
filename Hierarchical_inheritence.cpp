#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
		
		void get()
		{
			cout<<"Enter numbers: ";
			cin>>a>>b;
		}
};

class B: public A{
	public:
		void sum(){
			cout<<"\nSum : "<<a+b<<endl;
		}
};

class C: public A{
	public:
		void sub(){
			cout<<"\nSub : "<<a-b<<endl;
		}
};
int main(){

	B obj1;
	obj1.get();
	obj1.sum();
	
	C obj2;
	obj2.get();
	obj2.sub();
	

return 0;
}

