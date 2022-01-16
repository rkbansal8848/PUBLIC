
#include<iostream>
using namespace std;
class M{
   protected:
   int m1=10;
   int m2=20;
   int show1(){
   	return m1+m2;
   }	
};

class N:protected M{
    public:
    	int n1=2;
	int value1=show1();
	
	int data_n(){
		return value1+n1;
	}
		
		
	
};

class O: protected M{
	public:
		int o1=3;
	int value2=show1();
   int data_o(){
   	return value2+o1;
   }

};

class P:protected N,protected O{
	public:
	 int value_p=data_n()+data_o();
	 int data_p(){
	 	return value_p;
	 }
};


int main (){
	P p;
	cout<<"the values are "<<p.data_p();
	return 0;
}

