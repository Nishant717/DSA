#include<iostream>
using namespace std;
int main()
{
    int arr[5]={20,40,60,80,100},i,count=0,sum=0,output;
    for(i=0;i<5;i++)
    {
            count++;
            sum=arr[i]+sum;
            output=sum/count;
            cout<<" "<<output<<endl;
    }

}