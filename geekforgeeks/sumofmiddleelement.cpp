//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here
            vector<int>x;
            int ans;
            int i;
            int q;
            for(i=0;i<n;i++)
            {
                x.push_back(ar1[i]);
            }
            for(i=0;i<n;i++)
            {
                x.push_back(ar2[i]);
            }
            sort(x.begin(),x.end());
            if(x.size()%2==0)
            {
               q=x.size()/2; 
               ans=x[q-1]+x[q];
               return ans;
            }
            else
            {
                q=x.size()/2;
                q--;
                return x[q];
            }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends