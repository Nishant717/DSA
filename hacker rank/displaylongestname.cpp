#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[5]={'nis','nish','nisha','nishan','nishant'};
    int length1,i;
    for(i=0;i<5;i++)
    {
            length1=strlen(name[i]);
            cout<<"length : "<<length1<<endl;
    }

}