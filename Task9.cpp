#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter number of days"<<endl;
    cin>>days;
    cout<<"Year : "<<days/365<<endl;
    cout<<"Weeks : "<<(days%365)/7<<endl;
    cout<<"Days : "<<((days%365)%7)<<endl;
}
