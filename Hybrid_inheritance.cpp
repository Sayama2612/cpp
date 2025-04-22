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

class B:virtual public A{
	public:
		int sum;
		
		void add(){
			
			sum = a + b;
		}
		
};

class C:virtual public A{
	public:
		int sub;
		void diff(){
			
			sub = a - b;
		}
	
};

class D:public B, public C{
	public:
		void show(){
			cout<<"\nSum :"<<sum;
			cout<<"\nSub :"<<sub;
		}
};
int main(){
	
	D obj;
	obj.get();
	obj.add();
	obj.diff();
	obj.show();

return 0;
}

