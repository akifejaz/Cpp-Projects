
#include <iostream >
using namespace std;

 
 int main()
 {  
 	int x=0;
	int y=0;
	int z=0;
 	char first,second,third;
 	char user_input[100];
 	
 	cout <<"This program tell you the frequency of 3 characters you enter \n\nplease Enter a line \n";
 	cin.getline(user_input ,100);
 	
 	cout<<"please enter the first character\n";
 	cin>>first;
 	cout<<"please enter the second charater\n";
 	cin>>second;
 	cout<<"please enter the third character\n";
 	cin>>third;
 	
 	for(int i=0; i<100; i++)
 	{
 		if(user_input[i] == first)
 		{
 			x+=1;
		 }
		 
		 if(user_input[i] == second)
 		{
 			y+=1;
		 }
		 if(user_input[i] == third)
 		{
 			z+=1;
		 }
	 }
	 
	 cout<<"\nFrequency of First char ="<<x<<"\nFrequency of second char ="<<y<<"\nFrequancy of third char ="<<z;

 }
