#include<iostream>
using namespace std;

void area_of_Circle()
{   
	int radius, area ;
	cout<<"\tArea of Circle ";
	cout<<"\nEnter the radius : ";
	cin>>radius;
	
	area = 3.14159 *radius *radius ;
	cout<<"\nArea of Circle is : "<<area;
	
}

void area_of_Rectangle()
{
	int lenght, widht, area;
	cout<<"\tArea of Rectangle : ";
	cout<<"\nEnter Lenght :" ;
	cin>>lenght;
	cout<<"Enter widht : ";
	cin>>widht;
	
	area = lenght*widht;
	cout<<"\nArea of Rectangle is : "<<area;
	
}

void area_of_Triangle()
{
	int lenght , widht , area;
	
	cout<<"\tArea of triangle ";
	cout<<"\nEnter lrnght : ";
	cin>>lenght;
	cout<<"\nEnter widht : ";
	cin>>widht ;
	
	area = lenght*widht;
	area = area*0.5;
	cout<<"Area of Triangle : "<<area;
}

int main ()
{
	int input;
	cout<<"\n\t1. Calculate the Area of a Circle\n\t2. Calculate the Area of a Rectangle\n\t3. Calculate the Area of a Triangle\n\t4. Quit";
	
	while (true)
	{
		cout<<"\n\nEnter a number from 1 to 4 : ";
		cin>>input;
		
		if (input==1)
		{
			area_of_Circle();
		}
		if (input==2)
		{
			area_of_Rectangle();
		}
		if (input==3)
		{
			area_of_Triangle();
		}
		if (input==4)
		{
			return 0;
		}
		
	}
  
  return 0;
}
	
	
