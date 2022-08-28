#include<iostream>
using namespace std;
int main()
{
    int arr[100]={1,2,3,4,5,6},i,n,sum=0;
    cout<<"enter the index to add : "<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=arr[i]+sum;
    }
    cout<<"your sum is : "<<sum<<endl;
}