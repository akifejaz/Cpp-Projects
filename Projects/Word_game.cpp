#include <iostream>
using namespace std;

 struct wordStory {
 	
 	char name[50] ;
 	int age ;
 	char city_name[50];
 	char name_of_college[50];
 	char profesion[50];
 	char pet_name[50];
 	char animla_type[50];
 };

int main() 
{
 		struct wordStory data;
	
	cout<<"KINDLY ENTER THE FOLLOWING DETAILS : \n";
	cout<<"\nName : ";
	cin.getline(data.name, 50);
	cout<<"Name of your city : ";
	cin.getline(data.city_name, 50);
	cout<<"NAme of your College : ";
	cin.getline(data.name_of_college, 50);	
	cout<<"your profession : ";
	cin.getline(data.profesion, 50);
	cout<<"Name of your pet : ";
	cin.getline(data.pet_name, 50);	
	cout<<"which pet you have : ";
	cin.getline(data.animla_type, 50);
	cout<<"your aeg : ";
	cin>>data.age;
	
	cout<<"There once was a person named "<< data.name << ".who lived in \n" <<data.city_name <<". At the age of "<<data.age<<", "
	<< data.name<< " went to college at " <<data.name_of_college<<". \n"
	<< data.name<<" graduated from " <<data.name_of_college<< " and went to work as a "
	<<data.profesion<<"." <<"\nThen, "<< data.name <<" adopted a " <<data.animla_type <<" named " << data.pet_name<<". They both lived happily ever after";
	
	return 0;
	
}
