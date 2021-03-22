#include <iostream>
using namespace std;
//sort Ascending( ); 
//sort Descending( ); 

int main(){
	int num[100],n;
	int i,j,temp;
	
	cout<<"Enter How many numbers you want to sort eg. 10 "<<endl;
	cin>>n;

	for(i=0;i<n;i++){		
		cout<<"Enter number : ";
		cin>>num[i];	
	}
	
	
	for(i=0;i<n;i++){    // Asending Algorithum Logic 
		
		for(j=0;j<n;j++){
			
			if(num[i]<num[j]){
				
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}			
		}
	}
	cout<<"\nAscending "<<endl;
	for(i=0;i<n;i++){
	cout<<" "<<num[i];
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(num[i]>num[j]){
				
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}			
		}
	}
	cout<<"\n Descending"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<num[i];
	}
	
	return 0;
}
