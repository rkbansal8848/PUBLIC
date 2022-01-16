#include<iostream>
using namespace std;

    class A{
    	public:
    	virtual void showA(){
    		cout<<"show of A "<<endl;
		}
      
	};
	
	class B:virtual public A{
	public:
	void showB(){
		cout<<"show of B "<<endl;
	}	
   
		
	};
		class C:virtual public A{
	public:
	void showC(){
		cout<<"show of C "<<endl;
    }
		
	};
    	class D: public B,public C
        {
	public:
	void showD(){
		cout<<"show of D "<<endl;
	}	
   
	};



	int main(){
		D d;
        d.showA();
        d.showB();
		return 0;
	}
	
	
	
	