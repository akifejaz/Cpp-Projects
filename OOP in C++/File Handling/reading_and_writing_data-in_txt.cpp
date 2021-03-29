
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main (){

	
	string name;
	string name1;
	cout<<"Enter Something to store in txt file: ";
	getline(cin,name);
	
	ofstream file;
	file.open("sample.txt");
	
	if(file){
		
		file<<name;
		cout<<"Data Wrote Done ! \n\n" ;
		
	}
	else
	{
		cout<<"failed to open file ! ";
	}
	
	file.close();
	
	ifstream file1;
	file1.open("sample.txt");
	
	if(file1){
		
		cout<<"File opened for reading data !\n";
		
		while(!(file1.eof())){
			
			cout<<"Reading data started !\n";
			
			getline(file1,name1);
			
			cout<<"Data in file is : "<<name1;
			
			
		}
		
		cout<<"\nDone sussefully \n";
	}
	else
	{
		cout<<"Failed to open file ";
	}
	
	file1.close();
	
	return 0;
	
};
