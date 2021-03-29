#include <iostream>
using namespace std;

//enum time {AM,PM};
 
int main(){
	
   //time currenttime;
   int tim;
   cout<<"Enter Time in 24 formet: (only hours) : ";
   cin>>tim;
   
  
   if(tim<=12&& tim>=0)
   {
   	
   	cout<<"Time format is : AM";
   }
   else if(tim>12&& tim<=24)
   {
   	
   	cout<<"Time format is : PM";
   }
   
   else
   {
   	cout<<"Invalid Formet: ";
   }
      
   return 0;
}
