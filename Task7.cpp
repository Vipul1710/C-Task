#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"The numbers before swappng are"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    swap(&a,&b);
    cout<<"The numbers after swappng are"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b;
    return 0;
}
