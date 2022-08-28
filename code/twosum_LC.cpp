#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,arr[5]={1,3,5,7,9};
    cout<<"[";
    for(i=0;i<=4;i++)
    {
        sum=sum+arr[i];
        if(sum==12)
        {
            cout<<""<<i;
            break;
        }
        else 
        {
            sum=0;
            sum=sum+arr[i]+arr[i+1];
            cout<<""<<i;
            break;
        }

    }
    cout<<"]";
        
}