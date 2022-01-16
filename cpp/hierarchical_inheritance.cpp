//hierarchical

#include<iostream>

using namespace std;

class M
{
protected:

int m1=10;
int m2=20;

int showl(){
 return m1+m2;
}
 };

class N:protected M
{
public:

int n1=2;
 int valuel=showl();

int data_n(){

return valuel+n1;

 }

};

class O: protected M
{
public:

int o1=3;

int value2=showl();

int data_o(){

return value2+o1;

 }

};

int main(){
N n;
O o;
cout<<"the value from class N is "<<n.data_n()<<endl;
cout<<"the value from class O is "<<o.data_o()<<endl;
cout<<"the sum of the data is "<<(n.data_n()+o.data_o());





    return 0;
} 