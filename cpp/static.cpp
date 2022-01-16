#include<stdio.h>
using namespace std;
class A{
public:
static int a;
static int st(){
return a;

}
int st(){
    return 2;
}
};

int A::a=10;

int main()
{
int v;
 A a1;
 v=a1.st();
 cout<<v;

    return 0;
}