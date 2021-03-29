
#include<iostream>
#include<string>
using namespace std;

class Vehicle{    // abstract class 
	
	protected : 
		string c;

	public:
		
		void gettype(){
			
			cout<<"Enter type of vehicle (Car , Bus or truck ): ";
			cin>>c;
		}
		
		void put (){
			
			cout<<"Type of vehicle is : "<<c;
		}
		
		virtual bool isoutstanding() =0;  // have one pure virtual function 
};

	class Car : public Vehicle {
		protected:
			int Engine_power ;
			
		public:
			
			void Getenginepower(){
				cout<<"Enter Engine Power :";
				cin>>Engine_power;
			}
			
			void  Putenginepower (){
				
				cout<<"Engine Power is : "<<Engine_power;
			}
			
			bool isoutstanding(){
		  	 bool a;
		  	if(Engine_power>1300)
		  	{
		  		a=true;
		  		return a;
		  		
			}
			else 
			  {
			  	a=false ;
			   return a;
			  }
		  }
			
	};
	
	class Bus : public Vehicle{
		private:
			int no_seats;
		public:
			void getSeats() {
				
				cout<<"\nEnter Seats of Bus  :";
				cin>>no_seats;
			}
			
			void putseats (){
				cout<<"\nSeats of Bus  : "<<no_seats;
			}
			
			bool isoutstanding(){
		  	 bool a;
		  	if(no_seats>45)
		  	{
		  		a=true;
		  		return a;
		  		
			}
			else 
			  {
			  	a=false ;
			   return a;
			  }
		  }
			
	};
	
	
int main (){
	
	Bus obj; Car obj1; 
	
//	obj2.gettype();
//	obj2.put();
	
	obj.getSeats();
	obj.putseats();
	obj.gettype();
	obj.put();
	
	obj1.Getenginepower();
	obj1.Putenginepower();
	obj1.gettype();
	obj1.put();
	
	return 0; 
}
		
