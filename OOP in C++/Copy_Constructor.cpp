
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
		
		//Copy Constructor !  ClassName (const ClassName &Old_obj)
		copyconstructor(const copyconstructor &obj) {
			
			cout<<"copy constructor called ! \n";
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
    		we can creat copy constructor by using " = operator " , But the construcotor we have made
    		can be called, just after creating ( along ) an object. 
    		
    		in the example below, a new object (obj3) is created and that is copying value of "obj1"
    		the obj3 should have value of obj1 at the end .
    		
    		it can also be called as --> " obj1(obj3);
    */
	copyconstructor obj3 = obj1 ;   
	
	obj3.disp();
	
	return 0;
}
