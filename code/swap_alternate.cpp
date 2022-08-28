#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},i,temp=0,n;
    for(i=0;i<=4;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
    cout<<"your array is : "<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<arr[i]<<endl;
    }
}