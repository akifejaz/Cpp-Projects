#include<iostream>

using namespace std;

int main()
{
	
	char address_array [500];

	cout<<"Enter sentence having commas in it. \n" ;
	
	cin.getline(address_array,100);
	
	for(int i=0; address_array[i] !='\0'; i++)
	{
		if (address_array[i] ==44)
		{

			address_array[i] = '\n';
		}
		cout <<address_array[i];
	}
	

}
