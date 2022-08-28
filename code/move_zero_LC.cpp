#include<iostream>
using namespace std;
int main()
{
    int arr[7]={0,1,0,2,0,3,4},i,j,temp,n,l=0;
    for(i=0;i<=6;i++)
    {
        if(arr[i]!=0)
        {
            arr[l]=arr[i];
            l++;
        }
        
        
    }
    for(i=0;i<=6;i++)
    {
        cout<<arr[i]<<endl;
    }
}