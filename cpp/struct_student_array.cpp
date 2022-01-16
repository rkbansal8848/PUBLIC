#include<iostream>
using namespace std;

class student{
    public:
    char name[10];
    int rollno;
}stud[3];

int main() {
for(int i=0;i<3;i++){
cout<<"enter the name for student "<<i+1<<endl;
cin>>stud[i].name;
cout<<"enter roll no for student "<<i+1<<endl;
cin>>stud[i].rollno;

}
for(int i=0;i<3;i++){

cout<<"the name for student "<<i+1<<" is:"<<stud[i].name<<endl<<endl;
cout<<"roll no for student "<<i+1<<" is:"<<stud[i].rollno<<endl<<endl;
}
        
return 0;
}


