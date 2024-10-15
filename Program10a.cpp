// Display factorial of a number entered (while, do-while,for).
// This program is using while loop.

#include<iostream>
using namespace std;

main()
{
    int factorial=1, number,i=1;

    cout<<"Enter the number :";
    cin>>number;

    while (i<=number)
    {
       factorial=factorial*i;
       i++;
    }
    
    cout<<factorial<<" is the factorial number";
    return 0;
}