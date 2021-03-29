

#include <iostream>
using namespace std;

void isprime(int &s, int &count){
	
	
	
	if (s==0 || s==1){
		
		count +=1 ;
		
	}
	else {
		
		for (int i=2; i<=s/2; i++){
			
			if(s%i==0){
				
				count+=1;
				break;
			}
			
		}
	}
}

int main() {
	
	int s, e, counterPrime, counterComposit;
	
	cout<<"Enter Starting Number : ";
	cin>>s;
	cout<<"Enter Ending Number : " ;
	cin>>e;
	
	for (int i=s; i<=e; i++){
		
		isprime(i,counterComposit) ;
	}
	
	cout<<"Prime Numbers are : " <<(e-s)-counterComposit;
	cout<<"\nComposite numbers are : " <<counterComposit;
	
	return 0; 
}
