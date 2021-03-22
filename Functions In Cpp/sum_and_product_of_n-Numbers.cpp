#include <iostream>
#include <string>
using namespace std;

int Sum_of_array()
{
	int n=0;
	cout<<"Enter how many numbers you want to sum : ";
	cin>>n;
	
	float sum=0;
	float array[n] ;
	
	cout<<"\nEnter Numbers : \n";
	for (int i=0; i<n; i++)
	{
		cin>>array[i] ;
	}
	
	for (int i=0; i<n; i++)
	{
		sum = sum + array[i] ;
	}
	
	return sum;
}
int Product_of_array()
{
	int n=0;
	cout<<"\nEnter how many numbers you want to Product : ";
	cin>>n;
	
	float product=1;
	float array[n] ;
	
	cout<<"\nEnter Numbers : \n";
	for (int i=0; i<n; i++)
	{
		cin>>array[i] ;
	}
	
	for (int i=0; i<n; i++)
	{
		product = product * array[i] ;
	}
	
	
	return product;
}

int main()
{
	
	cout<<"Sum Of Given Numbers : "<<Sum_of_array( );
	cout<<"\nProduct Of Given Numbers : "<<Product_of_array( );
	
	return 0;
}
