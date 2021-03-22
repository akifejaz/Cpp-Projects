#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n=0;
	cout<<"How many countries data you want to store? : ";
	cin>>n;
	
	string Countryname[n];
	int populations[n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"\nEnter the Name of "<<i+1<<" Country: ";
		getline(cin,Countryname[i]);
		
		
		
		cout<<"Enter the Population of "<<i+1<<" Country: ";
		cin>>populations[i];
		
		
	}
	for (int i=0; i<n; i++)
	{
		cout<<"\n\nName of "<<i+1<<" Country is : "<<Countryname[i];
		cout<<"\nthe Population of "<<i+1<<" Country is : "<<populations[i];
		
	}
	
	return 0;
}
