/*
	Creat two files with name eg, "source_file.txt" and "Destination_File.txt"
	in the same folder where you have saved this code. in order to work this
	program
  
  Enter Files name as asked with extension, eg, sample.txt
  these files should be on the same location where this code is present
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
  char ch;
	char s_F[20], t_F[20];   // s_F means Source file t_F means Target File
	
    FILE *pointer_s_F, *pointer_t_F;  // pointer for pointing sourse file 1st character 
    
    cout<<" Name of Source File: ";
    cin>>s_F;
    
    pointer_s_F = fopen(s_F, "r");  // open source file in read Mode 
    
    if(pointer_s_F == NULL)
    {
        cout<<"\nFile Not Opened ! ";
        return 0;
    }
    
    cout<<"\n Name of Target File: ";
    cin>>t_F;
    
    pointer_t_F = fopen(t_F, "w");
    
    if(pointer_t_F == NULL)
    {
        cout<<"\nFile Not Opened !";
        return 0;
    }
    
    ch = fgetc(pointer_s_F);                 // main code for copy !!
    while(ch != EOF)          // EOF = End of File 
    {
        fputc(ch, pointer_t_F);
        ch = fgetc(pointer_s_F);
    }
    
    cout<<"\nFile copied successfully.";
    
    fclose(pointer_s_F);
    fclose(pointer_t_F);
    
    cout<<endl;
    return 0;
}
