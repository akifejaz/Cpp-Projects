#include<iostream>
using namespace std;

 struct faculty 
{
	char name[30];
	char designation[30];
	int salary;
	char mobile_no[30];
	
};

void input(struct faculty &data2)
{	
		
	cout<<"Please Enter Your Name \n";
	cin.getline(data2.name,30 );
	
	cout<<"Enter designation \n";
	cin.getline(data2.designation ,30);
	
	cout<<"Enter your mobile number \n";
	cin.getline(data2.mobile_no ,30);
	
	
	cout<<"Enter Your Salary \n";
	cin>>data2.salary;
	cin.ignore();

}

void display(struct faculty da )
{
	cout<<"\nName        : "<<da.name;
	cout<<"\nDestination : "<<da.designation;
	cout<<"\nMobile No   : "<<da.mobile_no;
	cout<<"\nSalary      : "<<da.salary;
}

int main ()
{
	struct faculty data1,data2;	
	input(data1);
	input(data2);
	
	display(data1);
	display(data2);

return 0;
}
