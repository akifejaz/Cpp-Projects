#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cout<<"Enter how many employes data you want to save along with Identification Number : "	;
	cin>>n;
	
	int ident_no[n];
	float grosspay[n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"\nEnter the Identification No of "<<i+1<<" Employee: ";
		cin>>ident_no[i];
		
		cout<<"Enter the Gross pay of "<<i+1<<" Employee: ";
		cin>>grosspay[i];
		
		
	}
	for (int i=0; i<n; i++)
	{
		cout<<"\n\nIdentification No of "<<i+1<<" Employee is : "<<ident_no[i];
		cout<<"\nGross pay of "<<i+1<<" Employee is : "<<grosspay[i];
		
	}
	 
	 return 0;
}
