#include <iostream>

using namespace std;

int main()
 {

	char user_array[20];
	char reverse_array[20];
    int y=0;
	
	      cout << " Enter some charaters with \nMaximum lenght 20 \n"<<endl;
          cin.getline(user_array,20) ;
          
        
        cout<<" Reverse of all characters ";
        
        for ( int x =20; x>=0; x--)
        {
        	
       	reverse_array[y] = user_array[x] ;
       	
       	cout<<reverse_array[y] ;
        y+=1;
       
        
		}
		
     
	     
  return 0;

}
