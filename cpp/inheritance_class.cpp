#include <iostream> 
using namespace std;

class M
{

protected:
    int a = 2;

    int show1()
    {
        return a;
    }
};

class N 
{

protected:


    int b = 3;

    int show2()
    {

    return b;
    }
};
    class O : protected  M,protected N
    {

    public:
        int value3;
        int c = 1;

        int show3()
        {
         
         value3=c+show1()+show2();
          return value3;
        }
    };
    int main(){
       O o;
    cout<<"the value is "<<o.show3()<<endl;
    return 0;
    }