#include <iostream>
using namespace std;

struct divisions
{
	int first_Quarter;
	int second_quarter;
	int third_quarter;
	int fourth_quarter;
	int average_quarter;
	
};

void input(struct divisions &data)
{
	cout<<"Enter the Following Data : \n";
	
	cout<<"First Quarter Sale : ";
	cin>>data.first_Quarter;
	
	cout<<"Second Quarter Sale : ";
	cin>>data.second_quarter;
	
	cout<<"Third Quarter Sale : ";
	cin>>data.third_quarter;
	
	cout<<"Fourth Quarter Sale : ";
	cin>> data.fourth_quarter;
}

 float average(struct divisions &data)
 {
 	int average=0;
 	average = data.first_Quarter+data.fourth_quarter+data.second_quarter+data.third_quarter;
 	average = average/4 ;
 	
 	return average;
 }

int main ()
{
	char value[13]; float average_value=0;
	struct divisions data;
	cout<<"Enter Division Name (East,  West, North, South ) : ";
	cin>>value;
	input(data);
	
	average_value = average(data);
	cout<<"\nAverage Quarterly Sales of " << value <<" division is : "<<average_value;
	
	return 0;
}
