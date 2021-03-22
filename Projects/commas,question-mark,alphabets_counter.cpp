#include <iostream>

using namespace std;

int main()
 {
 	
 	char array[200];
 	cout<<"Enter any Sentence \n";
 	cin.getline(array,200);
 	
 	int alphCharacters=0 , Coma=0 , QuestionMark=0;
 	
 	for ( int i=0; i<=200; i++)
 	{
 		if (array[i]>=65 && array[i]<=90)
 	
 		{
 			alphCharacters +=1;
 			
		 }
		 if (array[i]>=97 && array[i]<=122)
 	
 		{
 			alphCharacters +=1;
 			
		 }
		 if (array[i]==44)
 	
 		{
 			Coma  +=1;
 			
		 }
		 if (array[i]==63)
 	
 		{
 			QuestionMark  +=1;
 			
		 }
		 
	}
	
	cout <<"No of Alphabats :"<<alphCharacters <<endl;
	cout<<"NO of commas :"<<Coma <<endl;
	cout<<"No of Question mark : "<<QuestionMark<<endl;
 	
 	return 0;
}
