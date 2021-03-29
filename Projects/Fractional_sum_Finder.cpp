#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	int sum1,sum2;
	
	cout<<"This program will caclutate sum of two fractions: \nEnter First Fraction: \n";
	cin>>a;
	cout<<"/";
	cin>>b;
	cout<<"Enter second fraction: \n";
	cin>>c;
	cout<<"/";
	cin>>d;
	
	sum1= (a*d)+(c*b);
	sum2 = b*c;
	
	cout<<"Sum of your two fractions is: "<<sum1<<"/"<<sum2;
	
	
	return 0;
}
