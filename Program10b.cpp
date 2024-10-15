// Display factorial of a number entered (while, do-while,for).
// This program is using do-while loop.

#include<iostream>
using namespace std;

main()
{
    int factorial=1, number,i=1;

    cout<<"Enter the number :";
    cin>>number;
    do
    {
        factorial=factorial*i;
        i++;
    } while (i<=number);
    
     cout<<factorial<<" is the factorial number";
    return 0;
}