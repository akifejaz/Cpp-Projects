#include <iostream>
using namespace std;

class Triple{
	private:
		float x, y, z;
	public:
		Triple() 
		{
			x=y=z=0;
			
		}
		Triple(float a, float b, float c) 
		{
			x=a; y=b; z=c;
		}
		
		Triple operator + (Triple &obj1) 
		{
			Triple t; //temporary variable
			
			t.x = x + obj1.x;
			t.y = y + obj1.y;
			t.z = z + obj1.z;
		}
		
		Triple operator - (Triple obj) 
		{
			Triple t; 
			
			t.x = x - obj.x;
			t.y = y - obj.y;
			t.z = z - obj.z;
		}
		
		float getX() 
		{
			return x; 
		}
		float getY() 
		{
			return y; 
		}
		float getZ() 
		{
			return z; 
		}
		
		void Display() 
		{
			cout << "The Triple is "<<x <<" "<<y<<" "<<z; 
		}
		
		Triple (const Triple &obj)  //copy construcotr  
			
		{
			x = obj.x;
			y = obj.y;
			z = obj.z;
		}
		
		void operator ++() //post increment
		{
			x++;
			y++;
			z++;
		}
		
};


int main()   
{
	int x, y, z; Triple obj3;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
	cout<<"Enter the value of z: ";
	cin>>z;
	
	Triple obj(x, y, z); // object of class Triple
	cout<<"\nTriple 1 : ";
	obj.Display();
	 
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
	cout<<"Enter the value of z: ";
	cin>>z; 
	
	Triple obj1(x, y, z);
	cout<<"\nTriple 2 : ";
	obj1.Display();

    cout<<"\nAddition of two Triple : \n";
    obj3 = obj+obj1;
    obj3.Display();
    
    cout<<"\nsubtraction of two Triple : \n";
    obj3 = obj-obj1;
    obj3.Display();
    
    obj3.Display();
    
    cout<<"\ncopy of two Triple : \n";
    obj =obj1;
    obj.Display();
    
    cout<<"\nPost increment of two Triple : \n";
    obj3.operator ++();
    obj.Display();
	

	return 0;
}
