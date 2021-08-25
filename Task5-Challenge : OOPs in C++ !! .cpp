#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hr,min,sec;
    public:
        void getInput(void);
        void convertIntoSeconds(void);
        void displayOutput(void);
};
 
void Time::getInput(void)
{
    cout<<"Enter time:"<<endl;
    
    cout<<"Hours?   \n";          
    cin>>hr;
    
    cout << "Minutes? \n";          
    cin >> min;
    
    cout << "Seconds? \n";          
    cin >> sec;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = hr*3600 + min*60 + sec;
}
 
void Time::displayOutput(void)
{
    cout << "The time is = " <<setw(2)<<setfill('0')<<hr<< ":"
                             <<setw(2) << setfill('0')<<min<<":"
                             <<setw(2)<<setfill('0')<<sec<<endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T;
     
    T.getInput();
    T.convertIntoSeconds();
    T.displayOutput();
     
    return 0;
    
    // Code....
    // Written....
    // By....
    // Parth....
    // Yadav....
    
}
