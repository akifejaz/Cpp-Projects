#include <iostream>

using namespace std;

int main() {

	char user_array[15];
	char reverse_array[15];

	
	      cout << " Enter some charaters with \nMaximum lenght 15 \n"<<endl;
          cin.getline(user_array,15) ;
          
        
        cout<<" Reverse of all characters is ->";
        for ( int x =15; x>=0; x--)
        {
			cout<<user_array[x];
		}
		
    
	     
  return 0;

}
