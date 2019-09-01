#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[20];
    cout<<"Enter the string"<<endl;
    cin>>a;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=int(a[i])+32;
        }
    }

    cout<<"New lowercase string is "<<a;

}
