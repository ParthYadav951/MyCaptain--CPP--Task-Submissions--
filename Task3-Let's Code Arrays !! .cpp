#include <iostream>
using namespace std;

int main()
{
   int array[5];
   cout<<"Enter elements: \n";

   for(int i = 0; i < 5; ++i)
      cin>>array[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout<<endl<<*(array + i);

   return 0;
   
    // Code....
    // Written....
    // By....
    // Parth....
    // Yadav....

}
