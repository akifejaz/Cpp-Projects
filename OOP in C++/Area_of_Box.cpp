/*

Task 1: 
Create a class called Box that has int data members
"	Length
"	Breadth
"	Height 
Interface:
"	One constructor should initialize this data to 0, and 
"	another should initialize it to values provided by the user.
"	Area () member function that is used to calculate area of box object. 
"	display member function that displays area of box and also return total
number of objects that user has created using static variable.

*/

#include<iostream>
using namespace std;

class Box {
	
	int Length;
	int Height;
	int Breadth;
	int area;
	static int totalObj;
	
	public:
	Box () {
		
		Length =0;
		Height =0;
		Breadth =0;
		area =0;
		totalObj += 1; 
		
	}
	Box (int l, int h, int b) {
		
		Length = l;
		Height = h;
		Breadth = b;
		
		totalObj += 1; 
	}
	
	int Area(){
		

		return Length * Height * Breadth ;
	}
	
	void disp (){
		
		cout<<"Area of Box is : "<<Area();
		cout<<"\nTotal Objects You created until now : " << ShowObjCount(); 
	}
	
	static int ShowObjCount()
	{
		return totalObj;
	} 
};

int Box :: totalObj =  0; //initial value of totalobj static var 

int main (){
	
	
	int l, h, b;
	
	cout<<"Enter the Dimentions of Box : \n" ;
	cout<<"Lenght : " ;
	cin >>l;
	cout<<"Height : " ;
	cin>>h;
	cout<<"Breadth : " ;
	cin>>b;
	
	Box obj(l,h,b);
	
	obj.disp();
	
	return 0;
	
}

