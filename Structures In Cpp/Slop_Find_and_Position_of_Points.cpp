#include <string>
#include<iostream>
using namespace std;

 struct point 
{

	int xCordinate;
	int yCordinate;
	
	
};

void input(struct point &data)
{	
		
	cout<<"Please Enter X Cordinate: ";
	cin>>data.xCordinate;
	
	cout<<"Please Enter Y Cordinate: ";
	cin>>data.yCordinate;
	
	cin.ignore();

}
 int Gradient(struct point &data)
{
    return data.yCordinate/data.xCordinate;	  
}

void display(struct point &data)
{	

	
		
	cout<<"\nX Cordinate : "<< data.xCordinate;
	
	cout<<"\nY Cordinate : " << data.yCordinate;

}
int location(struct point &data)
{
	if (data.xCordinate>=0 && data.yCordinate>=0)
	{
		return 1;
	}
	
	else if (data.xCordinate<=0 && data.yCordinate>=0)
	{
		return 2;
	}

	else if (data.xCordinate>=0 && data.yCordinate<=0)
	{
		return 4;
	}
	else 
	{
		return 3;
	}

}

int main ()
{
	struct point data[10];
	int slop[10];
	
	for (int i=0; i<10; i++)
	{
	cout<<"\nEnter "<<i+1<<"st values of point \n";
	input( data[i] );
		
	}
	
	for (int i=0; i<10; i++)
	{
		cout<<"\n "<<i+1<<"st value of point   ";
		if (data[i].yCordinate==0)
		{
		cout<< "Slop is Infinite : ";
		cout<<"\n";
		}
    	else if (data[i].xCordinate==0)
		{
		cout<< "Slop is Zero : ";
		cout<<"\n";
		}
		else
		{
			cout<<"\nSlop is: " << Gradient( data[i] );
			cout<<"\n";
		}
	 slop[i] = Gradient( data[i] ) ;
	}
	
	for (int i=0; i<10; i++)
	{
	cout<<"\n"<<i+1<<"st values of points are  ";
	display(data[i] );
	cout<<"\n";
	}
	
	
	for (int i=0; i<10; i++)
	{
	cout<<"\n"<<i+1<<" values of ";
	cout<<"Points lies in "<<location(data[i] )<<" Quadrant :\n";
	}
	
	

return 0;
}
