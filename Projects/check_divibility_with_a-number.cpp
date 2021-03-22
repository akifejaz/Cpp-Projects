#include <iostream >
using namespace std;

 
 int main()
 {
 	int lenght,n=0;
 	cout<<"\nTells which numbers are divisible by a certain number(int only) \nPlease Enter How Many No You Have !\n";
 	cin>>lenght;
 	int input_arr[lenght];
 	
 	cout<<"No, for which you want to check : ";
 	cin>>n;
 	
 	cout<<"\nPlease Enter the No One by one \n";
 	for(int i=0; i<lenght; i++)
 	{
 		cin>>input_arr[i];
	 }
	 
	 cout<<"Multiples of "<<n<<" in your Entered numbers are :w \n";
	 
	 for(int i=0; i<lenght; i++)
 	{
 	 	if (input_arr[i]%n==0)
 	   	{
 	 		cout<<" "<<input_arr[i];
		  }
	 }
	 
	cout<<"\nMultiples of "<<n<<" are :\n";
	
	  for(int i=0; i<lenght; i++)
 	{
 			if (input_arr[i]%n==0)
 	 	  {
 	 		cout<<" "<<(input_arr[i])*5;
		  }
 	 
 	 	
		  
	 }
	 
	  return 0;
  }
 
