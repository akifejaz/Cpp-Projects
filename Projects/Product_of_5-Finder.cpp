#include <iostream >
using namespace std;

 
 int main()
 {
 	int lenght;
 	cout<<"\nThis program will tell which numbers are Multiples of 5 and their multiples also\nPlease Enter How Many No You Have !\n";
 	cin>>lenght;
 	int input_arr[lenght];
 	
 	cout<<"\nPlease Enter the No One by one \n";
 	for(int i=0; i<lenght; i++)
 	{
 		cin>>input_arr[i];
	 }
	 
	 cout<<"Multiples of 5 in your Entered numbers are :w \n";
	 
	 for(int i=0; i<lenght; i++)
 	{
 	 	if (input_arr[i]%5==0)
 	   	{
 	 		cout<<" "<<input_arr[i];
		  }
	 }
	 
	cout<<"\nMultiples of 5 are :\n";
	
	  for(int i=0; i<lenght; i++)
 	{
 			if (input_arr[i]%5==0)
 	 	  {
 	 		cout<<" "<<(input_arr[i])*5;
		  }
 	 
 	 	
		  
	 }
	 
	  return 0;
  }
 
