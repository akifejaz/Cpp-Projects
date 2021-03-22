#include <iostream>
	using namespace std;
	
	int main ()
	{
		int rows =0;
		int colums=0;
		int max_value=0;
		int min_value=0;
		
		cout<<"Enter the No of Rows of Matrics : ";
		cin>>rows;
		cout<<"Enter the No of colums of matrice : ";
		cin>>colums;
		
		int array[rows][colums];
		cout<<"\nEnter the values for matrics : (Enter values row wise) \n" ;
		
		for (int i=0; i<rows; i++)
		{
			for (int j=0; j<colums; j++)
			{
				cout<<"Enter row " <<i+1<<" and Colum "<<j+1 <<" : ";
				cin>>array[i][j];
			}
			cout<<"\n";
		}
		
		cout<<"Your matrice is : \n\n";
		
	for (int i=0; i<rows; i++)
		{
			for (int j=0; j<colums; j++)
			{
				cout<<array[i][j];
				cout<<"  ";
			}
			cout<<"\n";
			
		}
			
		int assume=array[0][0];
		
		for (int i=0; i<rows; i++)
		{
			for (int j=0; j<colums; j++)
			{
				if (array[i][j]>assume)
				{
					assume= array[i][j];
				}
			}
		}
		
		max_value=assume;
		
			assume=array[0][0];
		
		for (int i=0; i<rows; i++)
		{
			for (int j=0; j<colums; j++)
			{
				if (array[i][j]<assume)
				{
					assume= array[i][j];
				}
			}
		}
		min_value = assume;
		
		cout<<"\n\nMin value : "<<min_value;
		cout<<"\nmax Value : "<<max_value;
		
		return 0;
	}
