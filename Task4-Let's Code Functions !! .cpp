#include <iostream>
using namespace std;

bool PrimeValueCheck(int num);

int main() 
{
    int num, p;
    bool symbol = false;

    cout<<"Enter a positive  integer: ";
    cin>>num;

    for(p = 2; p <= num/2; ++p) {
        if (PrimeValueCheck(p)) {
            if (PrimeValueCheck(num - p)) {
                cout<<num<<" = "<<p<<" + "<<num-p<<endl;
                symbol = true;
            }
        }
    }

    if (!symbol)
      cout<<num<<" Cannot be expressed as sum of two prime numbers.";

    return 0;
}

// To check if input value is a prime number
bool PrimeValueCheck(int num) 
{
    int p;
    bool nextsymbol = true;

    if (num == 0 || num == 1) {
        nextsymbol = false;
    }
    else {
        for(p = 2; p <= num/2; ++p) {
            if(num % p == 0) {
                nextsymbol = false;
                break;
            }
        }
    }

    return nextsymbol;
    
    // Code....
    // Written....
    // By....
    // Parth....
    // Yadav....
}
