#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,n;
    cout<<"enter target : "<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            cout<<"index is : "<<i<<endl;
        }
    }
}