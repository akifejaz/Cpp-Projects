/*Q3.

Write a function that reverses the contents of an integer array sent to the function in arguments.

*/

 #include <iostream>
using namespace std;

void reverse(int array[], int size)
{
	int reverse_arr[size];
	int count = size;
	
	for(int i=0;i<size;i++)
	{
		reverse_arr[count-1]=array[i];
		count--;	
	}
	for(int i=0;i<size;i++)
	{
		array[i]=reverse_arr[i];
	}	
}

int main()
{
	int size=0;
	cout<<"Enter the size of array: ";
	cin>>size;
	int array[size];

	cout<<"Enter numbers of your array one by one: \n";
	
	for (int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	reverse(array,size);

	cout<<"reverse of array is: ";
	for (int i=0; i<size; i++)
	{
		cout<<array[i]<<"  ";
	}

}
