// swap two numbers with call by value , call by reference.
// This program is using call by value.
#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"After swapping \n"<<"x:"<<x<<"&y:"<<y<<endl;
}

int main()
{
    int x,y;
    cout<<"Enter values of x & y :";
    cin>>x>>y;
    cout<<"Before swapping \n"<<"x:"<<x<<"&y:"<<y<<endl;
    swap(x,y);
    return 0;
}