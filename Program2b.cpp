// swap two numbers with call by value , call by reference.
// This program is using call by reference.

#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int a,b;
    cout<<"Enter values of a and b:";
    cin>>a>>b;
    cout<<"Before swapping \n"<<"a:"<<a<<"and b:"<<b<<endl;
    swap(a,b);
    cout<<"After swapping \n"<<"a:"<<a<<"and b:"<<b<<endl;
    return 0;
}
