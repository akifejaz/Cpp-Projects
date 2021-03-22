#include <iostream>

using namespace std;

int main() {

	char user_array [200] ;
	int vowels =0;
	
	
	cout << " Enter a sentence \nIt will show you how many wovels your sentence have ...!\n" ;
	cin.getline(user_array,100) ;
	
	for (int i=0; i<200; i++)
	{
		if (user_array[i]== 65 || user_array[i] == 97)    
		{
			vowels += 1;
		}
			if (user_array[i]== 69 || user_array[i] == 101)
		{
			vowels += 1;
		}
		if (user_array[i]== 73 || user_array[i] == 105)
		{
			vowels += 1;
		}
			if (user_array[i]== 79 || user_array[i] == 111)
		{
			vowels += 1;
		}
			if (user_array[i]== 85 || user_array[i] == 117)
		{
			vowels += 1;
		}
	}
  
  cout << "\nYour messege have "<<vowels << " vowels :";
  return 0;
  
}

