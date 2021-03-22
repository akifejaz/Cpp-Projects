#include <iostream>

using namespace std;

int main()
{
    int elaspedtime, hours, minutes, seconds;
    
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * 60;
    
    cout << "Please enter the number of seconds elapsed: ";
    cin >> elaspedtime;
    
    hours = elaspedtime / secondsPerHour;
    elaspedtime = elaspedtime % secondsPerHour;
    minutes = elaspedtime / secondsPerMinute;
    seconds = elaspedtime % secondsPerMinute;
    
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
  
  
  
