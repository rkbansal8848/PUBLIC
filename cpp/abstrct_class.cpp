#include<iostream>

using namespace std;

class shapeformula{
	public:
	virtual	void area(float length,float breadth,float height)=0;
		
		float pi(){
		float p=3.14;
			return p;
		}
};
class rectangle:public shapeformula{
	
	public:
		void area(float length,float breadth,float height){
	
		float Arec=length*breadth;
		cout<<"Area of rectangle is "<<Arec<<endl;
		}
		
};
class triangle:public shapeformula{
	
	public:
		void area(float length,float breadth,float height){
		float Atri=length*breadth*height;
		cout<<"Area of triangle is "<<Atri<<endl;
		}	
};

 /*class circle:public shapeformula{
 	public:
 	void area1(float r){
 		float Ac=pi()*r*r;
 		cout<<"area of circle is "<<Ac<<endl;
	 }
 	
 };*/
 /*class A:public circle{
 	
 	
 };

*/
int main()
{  int ch,length,breadth,height=0,radius;
	//cannot make object of abstract class
	rectangle R;
	triangle T;
//	circle C; now c itself is abstract class 
	cout<<"enter the choice want area for rectangle type 1 and for the special triangle type 2 and for circle type 3"<<endl;
	cin>>ch;
	if(ch==1){
		cout<<"enter the length,breadth for the rectangle"<<endl;
		cin>>length>>breadth;
		R.area(length,breadth,height);
	}
	else if(ch==2)
	{
	    cout<<"enter the length,breadth and height for the triangle"<<endl;
	    cin>>length>>breadth>>height;
		T.area(length,breadth,height);
	}
    else 
    cout<<"entered choice is not valid"<<endl;
/*	else
	{
		cout<<"enter radius for circle"<<endl;
		cin>>radius;
		C.area(radius);
	}
	*/
	return 0;
}
