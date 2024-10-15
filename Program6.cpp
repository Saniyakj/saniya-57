// Display if a number entered is even or odd (if else).

#include<iostream>
using namespace std;
main()
{
    int number;

    cout<<"Enter a number:";
    cin>>number;

    if (number%2==0)
    {
    cout<<number<<"is even";
    }
    else
    {
    cout<<number<<"is odd";
    }
    return 0;
    
}