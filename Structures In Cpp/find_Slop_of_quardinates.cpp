#include<iostream>
using namespace std;

 struct gradiant 
{
	float point1;
	float point2;

};

void input(struct gradiant &z)
{	
	
	cout<<"Please Enter point 1 \n";
	cin>>z.point1;
	
	cout<<"Enter point 2 \n";
	cin>>z.point2;
	cin.ignore();

}

int gradianfunction(struct gradiant &x , gradiant &y)
{
	float xcordinates=0;
	float ycordinates=0;
	float gradiantFinal=0;
	
	
	xcordinates = x.point2 - x.point1;
	ycordinates = y.point2 - y.point1;
	if (ycordinates==0)
	{
		gradiantFinal =0;
		cout<<" Gradiant of points is Zero \n";
	}
	else if (xcordinates==0)
	{
		cout<<"Gradiant is infinity \n";
		
	}
	else
	{
		gradiantFinal = ycordinates/xcordinates;
	}
	
	return gradiantFinal;
}

int main ()
{
	struct gradiant x,y;
	cout<<"Enter x cordinates \n"	;
	input(x);
	cout<<"Enter y cordinates \n";
	input(y);
	cout<<" \n"<<gradianfunction (x , y);

return 0;
}
