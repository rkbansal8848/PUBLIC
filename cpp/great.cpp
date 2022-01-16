#include <iostream>
using namespace std;

int main() {    
    float n1, n2, n3;
    cout << "Enter three numbers as a,b,c: ";
        cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
            cout << "Largest number is a=" << n1<<endl;
    if(n2 >= n1 && n2 >= n3)
            cout << "Largest number is b=" << n2<<endl;
    if(n3 >= n1 && n3 >= n2)
            cout << "Largest number is c=" << n3<<endl;
    return 0;
    }