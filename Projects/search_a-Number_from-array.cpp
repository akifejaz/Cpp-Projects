

#include <iostream>
using namespace std;

int search_integer (int a[],int y)
{
	int x=0;
	for (int i=0;i<=9; i++)
	{
		if (a[i]==y)
		{
			x+=1;
		}
	}
	
	return x;
}

int main()
{
	int user_array[10];
	int search_value =0;
	
	cout << "Enter 10 Numbers \n";
	
	for (int i=0; i<=9; i++)
	{
		cin >>user_array[i];
	}
	
	cout << "\nEnter the value you want to search from your Entered values\n";
	cin>>search_value;
	
	cout<<" Your value came "<<search_integer(user_array,search_value)<<" times ";
}
