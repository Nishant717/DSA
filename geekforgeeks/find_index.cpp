//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        int i;
        vector<int>b;
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                
                    if(b.size()==2)
                    {
                             b.pop_back();
                    }
                    b.push_back(i); 
            }
        }
        if(b.size()==0)
        {
            b.push_back(-1);
            b.push_back(-1);
        }
        if(b.size()==1)
        {
            b.push_back(b[0]);
        }
        return b;
        
    }
   
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends