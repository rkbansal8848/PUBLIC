#include<iostream>
using namespace std;

int show(int a,int b){
    static int c=0;//only run once 
    c=a+b+c;
    return c;
}

int main() {
    cout<<show(2,3)<<endl;
      cout<<show(2,3)<<endl;
        cout<<show(2,3)<<endl;
          cout<<show(2,3)<<endl;
            cout<<show(2,3)<<endl;
              cout<<show(2,3)<<endl;
              

return 0;
}