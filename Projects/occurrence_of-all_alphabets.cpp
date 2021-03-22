#include <iostream>
using namespace std;

int main()
{
	char array[1000] ;
	int charecter[26];
	
	for(int i=0; i<=26; i++)
	{
		charecter[i]=0;
	}
	
	cout <<"Enter any sentence : ";
	cin.getline(array, 1000);
	
	
	for (int i=0; i<array['\0']; i++)
	{
		
		for (int j=97; j<=122; j++)
		{
			if (array[i] == j )
			{
				charecter[j-97] = charecter[j-97] + 1;
			}
		}
	}
	char x='a';
	int a =charecter[0];
	int b ;
	for(int i=0; i<26; i++)
	
	{   
	
		cout<<"\n" <<x<<" comes "<<charecter[i]	;
		x=x+1;
		
		if(charecter[i] >a)
		{
			a=charecter[i];
			b=charecter[i];
		}
	}
	  x='a';
	for(int i=0; i<26; i++)
	{

	}
 		cout<<"\nThis came Max. Time : " << a  ;	
		 
	return 0;	 	
}
