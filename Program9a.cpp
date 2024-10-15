// Display a message "Well Done" n number of times (while, do-while,for).
// This program is using while loop.

#include<iostream>
using namespace std;

main()
{
    int n,i=0;

    cout<<"Enter the number of time you want to display the message:";
    cin>>n;

    // using while loop
    cout<<"\nUsing while loop:";
    while (i<n)
    {
        cout<<"\nWell done ";
        i++;
    }
    
    return 0;
}