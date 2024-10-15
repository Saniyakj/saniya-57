// Display suitable message for choosin a favourite number from 1-5 (switch case).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number from 1-5:";
    cin>>n;
    switch(n)
    {
        case 1: cout<<"You will have a lot of fun today!";
        break;
        case 2: cout<<"You will be known for you hardwork!";
        break;
        case 3: cout<<"Your are fine just smile!";
        break;
        case 4: cout<<"You can do it!";
        break;
        case 5: cout<<"Success begins with pain and hardwork. just do it!";
        break;
    }
    return 0;
}