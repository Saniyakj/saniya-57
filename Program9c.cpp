// Display a message "Well Done" n number of times (while, do-while,for).
// This program is using for loop.

#include<iostream>
using namespace std;

main()
{
    int n;

    cout<<"Enter the number of time you want to display the message:";
    cin>>n;

    // using for loop
    cout<<"\nUsing for loop:";
    for(int i=0;i<n;i++)
    {
        cout<<"\nWell done ";
    }

    return 0;
}