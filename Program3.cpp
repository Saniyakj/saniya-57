// Calculate sum and average of two numbers inputted.
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    float avg;
    cout<<"Enter two number :";
    cin>>a>>b;
    sum=a+b;
    avg=sum/2;
    cout<<"Sum of two numbers is :"<<sum<<"\n Average of two numbers is :"<<avg;
    return 0;
}