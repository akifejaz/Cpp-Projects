
#include <iostream>
using namespace std;

int add_insert(int array[])
{
	int user_no=0;
	int x=0;
	cout<<"\nEnter a Number\n";
	cin>>user_no;
	

	
	if (user_no<=array[0])
	{
		for (int j=9;j>=0; j--)
		{
			int y=0;
			y=array[j];
			array[j+1]=y;
		}
		array[0]=user_no;
	}
	else if(user_no>array[9])
	{
		array[10]=user_no;
	}
	
	else
	{
			for (int i=0; i<=9; i++)
	{
		 if ((user_no>array[i]) && (user_no<array[i+1]))
		{
		x=i;
		goto replace;
		
		}
	}
	replace:
		for (int i=9; i>=x; i--)
		{
		int y=0;
		y= array[i];
		array[i+1]=y;
		}
    	array[x+1]=user_no;
	
	
	}
	
	for(int i=0; i<11; i++)
	{
	cout<<" "<<array[i];
	}
}


int main ()
{
	int array[1000] = {10,20,30,40,50,60,70,80,90,100};
	cout<<"Initially the array is \n";
	for(int i=0; i<10; i++)
	{
	cout<<" "<<array[i];
	}
	add_insert(array);
}
