/*Q.2 Use for loops to construct a program that displays a pyramid of Xs on the screen. 
The pyramid should look like this except that it should be 20 lines high, instead of 
the 5 lines shown here. 

      x    
     xxx   
    xxxxx  
   xxxxxxx
  xxxxxxxxx
 1
1 2
123
12345
1234567
*/

#include<iostream>
using namespace std;

int main()
{
	int a=40;
	
	for(int i=0; i<=39; i+=2)
	{
		
		for(int k=0; k<=a; k++)
		{
		cout<<" ";
	    }
	    a-=1;
	    
		for(int j=0; j<=i; j++)
		{
			
			cout<<"#";
		
		}
		
		cout<<"\n";
		
		
		
	}
	
	return 0;
}
