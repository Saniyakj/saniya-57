// Convert temperature in Fahrenheit to Celsius
#include<iostream>
using namespace std;
int main()
{
    float temp;
    cout<<"Enter the temperature in Fahrenheit:";
    cin>>temp;
    cout<<"Temperature in Fahrenheit is:"<<temp<<"F"<<endl;
    temp=(temp-32)*(5.0/9);
    cout<<"Temperature in Celsius is :"<<temp<<"C";
    return 0;
}
