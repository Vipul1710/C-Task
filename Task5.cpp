#include<iostream>
using namespace std;
int main()
{
  int size,min,max=0;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
     for(int i=0;i<size;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
       }
       if(arr[i]<min)
       {
           min=arr[i];
       }
    }
    cout<<"Max element in array is "<<max<<endl;
    cout<<"Min element in array is "<<min<<endl;
}
