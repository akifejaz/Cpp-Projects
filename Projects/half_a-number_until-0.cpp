#include <iostream>

using namespace std;

int half(int a)
{	int count=0;
	    do
    {
        a = a / 2;
        count ++;
    }
    while ((a >= 0) && (a != 0));
    
   return count;
}

int main()
{
    int input,count;
    
    cout << "Enter an Integer: ";
    cin >> input;
    cout <<"You Entered "<< input <<endl;
    cout<<"The number of times half called out";
    cout<<half(input);
    

    return 0;
}
