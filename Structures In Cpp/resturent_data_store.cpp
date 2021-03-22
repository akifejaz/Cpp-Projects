#include <iostream>

using namespace std;

 struct ResturantData 
{
	char ResturantName[50];
	char Location[100];
	int SittingCapacity;
	char CuisineStyle[40];
	
};

void input(struct ResturantData &data)
{	

	cout<<"Please Enter Your Resturant Name \n";
	cin.getline(data.ResturantName,50 );
	
	cout<<"Enter Location of Your Resturant \n";
	cin.getline(data.Location ,100);
	
	cout<<"Enter Your Cuisine Style \n";
	cin.getline(data.CuisineStyle ,40);
	
	
	cout<<"Enter your Sitting Capacity \n";
	cin>>data.SittingCapacity;
    cin.ignore();
}

void display(struct ResturantData data )
{
	cout<<"\nYour Resturant Name           : "<<data.ResturantName;
	cout<<"\nLocation of Your Resturant    : "<<data.Location;
	cout<<"\nEnter your Sitting Capacity   : "<<data.SittingCapacity;
	cout<<"\nEnter Your Cuisine Style      : "<<data.CuisineStyle;
}


int main ()
{
	struct ResturantData hotelNo1,hotelNo2;	
	
	cout<<" Enter Your Resturant details \n";
	cout<<" Resturant No 1\n ";
	input(hotelNo1);
	cout<<" Enter Your Resturant details \n";
	cout<<" Resturant No 2\n ";
	input(hotelNo2);
	cout<<"\n Your Resturant details are \n";
	cout<<" Resturant No 1\n ";
	display(hotelNo1);
	cout<<"\n Your Resturant details are \n";
	cout<<" Resturant No 2\n ";
	display(hotelNo2);

return 0;
}
