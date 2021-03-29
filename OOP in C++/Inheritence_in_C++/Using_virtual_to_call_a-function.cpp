#include <iostream>
using namespace std;

class Fruit{
	protected:
		string name;
		string color;
		string fruitingSeason;
	public: 
		Fruit()
		{
			name = '\0';
			color = '\0';
			fruitingSeason = '\0';
		}
		void Setter(string n, string c, string s)
		{
			name=n;
			color=c;
			fruitingSeason=s;	
		}
		
		string getname()
		{
			return name;
		}
		string getcolor()
		{
			return color;
		}
		string getfruitingseason()
		{
			return fruitingSeason;
		}
		
		virtual void Display()
		{
			cout<<getname()<<'\t'<<getcolor()<<'\t'<<getfruitingseason();
		}
		
};

class Citrus: public Fruit{
	public:
		void Display()
		{
			cout<<"The fruit is Citrus"<<'\n';		
		}
		
		
};

class StoneFruits: public Fruit{
	public:
		void Display()
		{
			cout<<"The fruit is Stone Fruit"<<'\n';	
		}
	
};

class Berries: public Fruit{
	public:
		void Display()
		{
			cout<<"The fruit is Berries"<<'\n';	
		}	
};

class FleshyFruits: public Fruit{
	public:
		void Display()
		{
			cout<<"The fruit is Fleshy Fruit "<<'\n';
		}	
};


int main()
{

	
	Fruit *objptr[4];  // Base class pointer object size 4

	Citrus c1;         // creating object of each derive class
	StoneFruits sf1;
	Berries b1;
	FleshyFruits ff1;
	
	objptr[0]=&c1;     // pointing the derived class object of each class to Base class pointer object.
	objptr[1]=&sf1;
	objptr[2]=&b1;
	objptr[3]=&ff1;
		
	objptr[0]->Display();     // displaying the "display()" function using Base pointer.
	objptr[1]->Display();
	objptr[2]->Display();
	objptr[3]->Display();
	
	return 0;
}
