#include <math.h>
#include <iostream>
using namespace std ;

int main ()
 {
 
 	cout<<"Enter a number more than one digits : ";
 	int userno;
	cin >>userno;
	
	int lenghtof_No;
	lenghtof_No = (int)(log10(userno))+1;
	
	cout<<"lenght of Your Number "<<lenghtof_No<<endl;
	 
	 
	 cout<<"Reverse of Your Number is ";
	 int array[lenghtof_No];
	 
	 for (int i=1; i<=lenghtof_No; i++)
	 {
	 	array[i] = userno%10;
	 	userno=userno/10;
	    cout<<array[i];
	 }
	 
	 
	 return 0;	
 }
 
