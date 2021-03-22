#include <math.h>
#include <iostream>
using namespace std ;


 int divider_function(int a , int b)
 {
 	return a/b;
 }
  int sum_function(int a , int b)
 {
 	return  a+b;
 }
  int subtract_function(int a , int b)
 {
 	return  a-b;
 }
  int product_function(int a , int b)
 {
 	return  a*b;
 }
int main ()
 {     back_toProgram:
 	int num1,num2, sum,product,subtract;
 	float divide;
 	char oprator;
 	cout <<"Good to see you hare..!\n\nEnter specific operator for your required task\n\tPress + for addition\n\tPress - for subtraction\n\tPress * for product\n\tPress / for division\n\tFor Exit Enter -1\n";
  	cout <<"Enter The Operator :";
 	cin >>oprator;
 	cout <<"\nEnter The First No :";
	cin >>num1;
	cout <<"Enter The Second No :";
 	cin>>num2;

 	
 		switch(oprator)
 		
 		{
 			case '+' :
 			sum = sum_function(num1 ,num2) ;
 			cout<<"The Result is " <<sum<<endl<<endl;
 			break ;
 			
 			case '-' :
 			subtract = subtract_function(num1 ,num2) ;
 			cout<<"The Result is " <<subtract<<endl<<endl;
 			break ;
 			
 			case '*' :
 			product = product_function(num1 ,num2) ;
 			cout <<"The Result is "<<product<<endl<<endl;
 			break ;
 			case '/' :
 				if (num2==0)
 				{
 					cout<<"ERROR\n Second Number cant be Zero !";
				 } 
				 else
				 {
				 	divide = divider_function(num1 ,num2) ;
 		            cout<<"The Result is " <<divide<<endl<<endl;
				 }
 		break ;
		 }
		 if (num1!=-1){
		 	 goto back_toProgram;
		    }
		 else
		 {
		 	cout <<"Good to see You !\nGood Bye";
		 }
		

		 
		 return 0;
 }
