//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int getSum(int a[], int n) {
        int i,sum=0;
        for(i=0;i<n;i++)
        {
            sum=a[i]+sum;
        }
        return sum;
        
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends