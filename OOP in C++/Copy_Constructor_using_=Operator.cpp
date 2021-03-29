
#include<iostream>
using namespace std;

class copyconstructor {
	
	private:
		int a;
		int b;
	
	public:
		
		copyconstructor (){ // Default constructor to assign. initial value 
			
			a = 0;
			b = 0;
		}
		
		copyconstructor (int x , int y ){  // Argumented Contructor 
			
			a = x;
			b = y;
		}
		
		//Copy Constructor:  "ClassName (const ClassName &Old_obj)"
		void operator = (const copyconstructor &obj){
			
			cout<<"= operator called ! \n";
			a = obj.a;
			b = obj.b; 
		}
		
		void disp(){
			
			cout<<"a : "<< a;
			cout<<"\nb : "<<b;
		}
};

int main (){
	
	//copyconstructor objects
	copyconstructor obj1(10,20), obj2(30,40);
    /*
    		we can creat copy constructor by using " = operator " , This constructor does not need
    		any new object creation to copy elements of an object. It can be called at any place in 
    		program.
    		
    		in the example below, object (obj2) is copying value of "obj1"
    		the obj2 should have value of obj1 at the end .
    		
    		it can also be called as --> " obj2(obj1);
    */
    
	obj2 = obj1; // calling "= operator "
	obj2.disp() ;
	
	return 0;
}
