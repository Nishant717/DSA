#include<iostream>
using namespace std;
int main()
{
    int arr[5]={15, 2, 45, 12, 7},i;
    for(i=0;i<5;i++)
    {
        if(arr[i]==i+1)
        {
            cout<<arr[i]<<endl;
        }
    }
}