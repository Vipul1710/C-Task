#include<iostream>
using namespace std;
int main()
{
    int sum=0,size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements in array = "<<sum;
}

