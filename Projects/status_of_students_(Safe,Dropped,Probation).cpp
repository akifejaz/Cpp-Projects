#include <iostream>

using namespace std;

int main() 
{

	float GPA =0;
	cout<<" Enter GPA of Student ";
	cin>>GPA;
	
	if ( GPA>=2.0 )	
	{
		cout << "Student is safe "<<endl;
	}
	
	if ( GPA>=1.7 && GPA<2.0 )	
	{
		cout << "Student is on probation "<<endl;
	}
	
	if ( GPA <1.7 )	
	{
		cout << "Student is Dropped "<<endl;
	}
	
	
	return 0;
}
