#include<iostream>

using namespace std;

int main()

{
  
  char user_array[530], comparator;
  int  key;
  char x = 'a';
  char alpha_bets1[26]; //small alpha-bets
  
  char y = 'A';
  char alpha_bets2[26]; //big alpha-bets
  
  
  
  	 for ( int i=1; i<=26 ; i++)
	 {
	 	alpha_bets1[i] = x++ ;	 			
	 }	
	 
	 for ( int i=1; i<=26 ; i++)
	 {
	 	alpha_bets2[i] = y++ ;				
	 }

  cout << "Enter a message You Want to Cipher : " <<endl;
  cin.getline(user_array,100);
 
  cout << "Enter The Shift key: ";
  cin >> key;

  for(int i = 0; user_array[i] != '\0'; ++i)
  {

    comparator = user_array[i];
 
    if(comparator >= 'a' && comparator <= 'z')
	  {

      comparator = comparator + key;

      if(comparator > 'z')
      
	  {
        comparator %= 'z';
       user_array[i] = alpha_bets1[comparator];
      }
      
      else
      {
      	    user_array[i] = comparator;
	  }
    
     }
     else if (comparator >= 'A' && comparator <= 'Z')
     {
     	comparator = comparator + key;
     	
       if(comparator > 'Z')
	   {
        comparator %= 'Z';
       user_array[i] = alpha_bets2[comparator];
       
       }
    else
       {
      	    user_array[i] = comparator;
	   }
	   
	 }
	
	}
	  cout << "Your cipherd Messege is : " <<user_array ;
    	return 0;
} 
 
