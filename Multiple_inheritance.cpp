#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		void getA(){
			cout<<"\nEnter num1 :";
			cin>>a;
		}
};
class B{
	public:
		int b;
		
		void getB(){
			cout<<"\nEnter num1 :";
			cin>>b;
		}
};
class C:public A, public B{
	public:
		void sum(){
			cout<<"\nSum :"<<a+b;
		}
};
int main(){
	C obj;
	obj.getA();
	obj.getB();
	obj.sum();


return 0;
}

