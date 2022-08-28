#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,3,7,4,9},i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                    temp=arr[i];
                    arr[i]=arr[j];                          //using STL time complexity 0(n*log(n))
                    arr[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
}