// Display a message "Well Done" n number of times (while, do-while,for).
// This program is using do-while loop.
#include<iostream>
using namespace std;

main()
{
    int n,i=0;

    cout<<"Enter the number of time you want to display the message:";
    cin>>n;
 
    // using do-while loop
    cout<<"\nUsing do-while loop:";
    do
    {        
        cout<<"\nWell done ";
        
        i++;
    } while (i<n);
   
    return 0;
}