#include <iostream>
using namespace std;

struct candidates
{
	int weight;
	float hight;
	
};


 int input(struct candidates &data)
{	

	int number =0;
	cout<<"Enter Height : ";
	cin>>data.hight;
	cout<<"Enter Weight : ";
	cin>>data.weight;
	
	if (data.hight>5.4)
	{
		if (data.weight>50 && data.weight<80)
		{
		
	    	cout<<"You are Eligible :";
	    	return 1;
	    	
		}
	}
	
	else
	{
		cout<<"You are Not Eligible " ;
	
	}
	

	return 0;
}

int main ()

{	
	int return_value =0; int input_value=0; int array_increment=0;
	struct candidates data,data_store[100];
	datainput:
 	cout<<"\n\nEnter 1 to Check Eligibility Test : \nEnter 2 to see all the data stored : \n\tPRESS ANY KEY TO EXIT \n";
 	cin>>input_value;
 	
 	if (input_value==1)
	 {
	 	return_value = input(data);
	 }
	 else if (input_value==2)
	 {
	 	if (array_increment==0)
	 	{
	 		cout<<"No Data Yet : \n";
		 }
		 else
		 {
		 	for (int i=0; i<array_increment; i++)
		 	{
		 		cout<<"\nNumber : "<<i+1<<endl;
		 		cout<<"Height is : "<<data_store[i].hight ;
		 		cout<<"Weight is : "<<data_store[i].weight;
			 }
		 }
	 }
	 else
	 {
	 	return 0;
	 }
 	 //dataStore:
 	 if (return_value ==1){
	 
 	 data_store[array_increment].weight= data.weight;
 	 data_store[array_increment].hight = data.hight ;
 	 array_increment = array_increment +1 ;
 }  
 
 
 goto datainput;
	
}
