// Display factorial of a number entered (while, do-while,for).
// This program is using for loop.

#include<iostream>
using namespace std;

main()
{
    int factorial=1, number;

    cout<<"Enter the number :";
    cin>>number;

    for(int i=1; i<=number;i++)
    {
        factorial=factorial*i;
    }

    cout<<factorial<<" is the factorial number";
    return 0;
}