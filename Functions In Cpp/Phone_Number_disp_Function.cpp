/*Q.3 A phone number, such as (212) 767-8900, can be thought of as
having three parts: the area code (212), the exchange (767), 
and the number (8900). Write a program that uses a structure to
store these three parts of a phone number separately. Call the structure phone.
Create two structure variables of type phone. Initialize one, and have the user 
input a number for the other one. Then display both numbers. The interchange might look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212

*/

#include<iostream>
using namespace std;

struct phoneNo {
	int areaCode;
	int exchange;
	int number;
};

void input(phoneNo num[])
{
	num[0].areaCode = 212 ;
	num[0].exchange = 767 ;
	num[0].number =  8900;
	
	cout<<"Enter Your Area code: ";
	cin>>num[1].areaCode;
	cout<<"\nEnter Your Echange code: ";
	cin>>num[1].exchange;
	cout<<"\nEnter your Number: ";
	cin>>num[1].number;
	
}

void output(phoneNo num[])
{
	cout<<"My Number is: "<<"("<<num[0].areaCode<<") "<<num[0].exchange <<" -"<<num[0].number ;
	cout<<"\nYour Number is: "<<"("<<num[1].areaCode<<") "<<num[1].exchange <<" -"<<num[1].number ;

	
}
int main()
{
	struct phoneNo num[2];
	
	input( num);
	output( num );
	
	return 0;
	
}
