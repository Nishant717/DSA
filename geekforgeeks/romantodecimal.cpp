//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        std::unordered_map<char, int> romanToDecimalMap{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int ans = 0;

    for (int i = 0; i < str.length(); i++) {
        if (i + 1 < str.length()) {
            if (romanToDecimalMap[str[i]] >= romanToDecimalMap[str[i + 1]]) {
                ans += romanToDecimalMap[str[i]];
            } else {
                ans += (romanToDecimalMap[str[i + 1]] - romanToDecimalMap[str[i]]);
                i++;
            }
        } else {
            ans += romanToDecimalMap[str[i]];
        }
    }

    return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends