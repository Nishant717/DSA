#include<iostream>
using namespace std;
int main()
{
    int A[3]={5,7,3},B[3]={3,8,5},i,count=0,count1=0;
    for(i=0;i<3;i++)
    {
        if(A[i]>B[i])
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    cout<<"A : "<<count<<" "<<"B : "<<count1<<endl;
}