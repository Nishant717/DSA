#include <iostream>
#include <vector>
using namespace std;
/*class Solution
{
public:
    int MissingNumber(vector<int> &array, int n);
    {
        int x=0;
        for (i = 0; i < n; i++)
        {
            x++;
            if(x!=i)
            return x;
        }
    }
};*/
int main()
{
    int i,j,n=0,arr[10]={3,4,7,2,8,1,5,9};
    for(i=1;i<=10;i++)
    {
        n++;
        if(n==arr[i]){
            cout<<" "<<endl;
        }
        else{
            cout<<n;
        }
    }

    
}