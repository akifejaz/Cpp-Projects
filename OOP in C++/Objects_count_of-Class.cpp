 #include<iostream>
 using namespace std;
 
 class X{
 	
 	static int TotalObjectsCount;
 	public:
 		X(){
 			
 			TotalObjectsCount+=1;
		 }
		 
        const int ShowTotalObjectsCount(){
        	
        	return TotalObjectsCount;
		 }
		
		void disp(){
			
			cout<<"\nThe Total Objects Count : "<<ShowTotalObjectsCount();
			
			
		}
		 
 };
 
 int X :: TotalObjectsCount = 0;
 
 int main ()
 {
 	 X  obj1, obj2; // created 2 objects here 
 	
 	cout<<"Currently 2 objects are created, make as many as you want and this program\nwill count all\n" ;
 
 	
	obj1.disp();
 	
 	
 	return 0;
 	
 	
 }
