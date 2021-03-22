#include <iostream>
using namespace std;

int main()
{
	int words=1; int lenght;
	char array[100000];
	cout<<"Enter any sentence you have : \n";
	cin.getline(array, 1000);
	cin.ignore();
	
	for(int i=0; i<10000; i++)
	{
		if (array[i]==32)
		{
			words= words+1;
		}
	}
	 
	 cout<<"the total words you have are : "<<words;
	
	return 0;
}
