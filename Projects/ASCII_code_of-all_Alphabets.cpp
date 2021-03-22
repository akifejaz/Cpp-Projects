
#include <iostream>
using namespace std;

int main ()
{
    char x = 'a';
    int alpha_bets1[26];
    char y = 'A';
	int alpha_bets2[52];
	
	
	 for ( int i=0; i<=25 ; i++)
	
	 {
	 	alpha_bets2[i] = y ;	
	 	
	 	cout <<  " ASCII code of " << y << " = " << alpha_bets2[i] << endl ;	
	 	y = y+1 ;		
	 }
	 	
	 for ( int i=1; i<=26 ; i++)
	
	 {
	 	alpha_bets1[i] = x ;
		 	
	 		 	 
		cout << " ASCII code of " << x << " = " << alpha_bets1[i] <<endl ;
		x = x+1 ;	
			 			
	 }	
	 

	 
		
		return 0;
	 }
	 
