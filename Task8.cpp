#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[20],b[20],c[20],f=0;
    cout<<"Enter 1st string"<<endl;
    cin>>a;
    cout<<"Enter 2nd string"<<endl;
    cin>>b;
    strcpy(c,b);
    if(strlen(a)!=strlen(b))
    {
       cout<<a<<" and "<<c<<" are not  Anagram" <<endl;
    }
    else
    {
        for(int i=0;i<strlen(a);i++)
        {
            for(int j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    b[j]='0';
                    f=0;
                    break;
                }
                else
                {
                    f=1;
                }
            }
        }
        if(f==0)
        {
            cout<<a<<" and "<<c<<" are Anagram" <<endl;
        }
        else
        {
            cout<<a<<" and "<<c<<" are not  Anagram" <<endl;
        }
    }
}
