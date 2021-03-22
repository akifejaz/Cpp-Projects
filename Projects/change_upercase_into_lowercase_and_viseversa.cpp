#include <iostream>
using namespace std;

int main ()
{
	char user_array [100];
	char lowerCaseArray [100];
	int value ;
	
	
	cout << "Enter a sentence\n I will convert Upercase letter into lowercase and lowercase into upper leaving symbolys\n ";
	cin.getline(user_array,100) ;
	
	for(int i=0; i<100; i++)
	{
		if (user_array[i]>=65 && user_array[i] <=90)
		{
			value = user_array[i]-65 ;
			value = value + 97;
			lowerCaseArray[i] = value;
		}
		else if(user_array[i]>=97 && user_array[i] <=122)
		{
			value = user_array[i] -97 ;
			value = value + 65;
			lowerCaseArray[i] = value;
		}
		else
		{
		    lowerCaseArray[i] = user_array[i]	;
		}
	}
	
	cout << " Your coverted string is below\n" <<lowerCaseArray;
	
	return 0;
	
}
