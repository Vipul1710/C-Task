#include<iostream>
using namespace std;
int main()
{
    int year,f=0;
    cout<<"Enter any year"<<endl;
    cin>>year;
    if(year%4==0)
    {
        f=0;
    }
    else if(year%400==0)
    {
        f=0;
    }
    else if(year%100!=0)
    {
        f=1;
    }
    else
    {
        f=1;
    }
    if(f==0)
    {
        cout<<year<<" is a leap year"<<endl;
    }
    else
    {
        cout<<year<<" is a not leap year"<<endl;
    }
}

