
#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter a Number greater than 0 : ";
	cin>>n;
	
	cout<<"The devisor of your numbers are : " ;
	for (int i=1; i<=n; i++){
		
		if (n%i ==0){
			
			cout<<i<<",";
		}
	}
	
	
	return 0;
}
