

/*

Please write a function that takes two numbers as arguments, 
If these two numbers are even I want you to double their value and
if they are odd I want you to half their value. If anything different dont do anything to them. 
Print the variables in the main function after the function call
send the variables first by value and then by reference

*/


 #include <iostream>
using namespace std;

int evaluator(int &v1, int &v2)
{
	if((v1%2==0)&&(v2%2==0))
	{
		cout<<"Numbers are Even: ";
		v1+=v1;
		v2+=v2;
		return 0;
	}
	else if( (v1%2!=0)&&(v2%2!=0)) 
	{
		cout<<"Numbers are Odd: ";
		v1=v1/2;
		v2=v2/2;
		return 0;
	}

}

int main( )

{
	int var1 , var2;
	cout<<"Enter two numbers one by one:  "<<endl;
	cin>>var1;
	cin>>var2;
	
	evaluator(var1,var2) ;
	
	cout<<"Variable 1 : "<<var1<<"   Variable 2 : "<<var2;
}
