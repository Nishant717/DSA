#include<iostream>
using namespace std;
int main()
{
    int arr[6]={6,7,3,5,2,9},i,n,count=0;
    cout<<"enter number : "<<endl;
    cin>>n;
    for(i=0;i<6;i++)
    {
        if(arr[i]<n)
        {
            count++;
        }
    }
    cout<<count;
}
