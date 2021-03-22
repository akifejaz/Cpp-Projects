#include <iostream>
using namespace std ;

void transpose(int a[][3])
{
		for(int j=0; j<3; j++)
	{
		for(int i=0; i<3; i++)
		{
		cout<<a[i][j] ;
		cout<<"   ";
			
		}
		cout<<"\n";
	}
}

int main ()
{
	const int x =3;
	int array[x][x];
	cout<<"This program will transpose your matrix . \nSize of matrix is 3 by 3\n\nKindly Enter the MATRIX ROW WISE (one after other row) \n\n";
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
	
			cin>>array[i][j];
		
			
		}
	}
	cout<<"\nYour Araay is : \n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
	
			cout<<array[i][j];
		cout<<"   ";
			
		}
		cout<<"\n";
	}
	cout<<"\nTranspose of array is : \n";
	transpose(array);
}
