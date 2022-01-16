#include<iostream>
using namespace std;
int main() {
    for(int i=0;i<10000;i++){
     static int j=1;
      int a=j+i;
      j=a;
      cout<<a<<endl;
    }
    
return 0;
}