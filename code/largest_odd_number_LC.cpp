class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string maxi;
        string ans;
        if (num[n - 1] % 2 != 0) {
            return num;
        }
        for (int i = 0; i < n; i++) {
            maxi += num[i];
            if (maxi[i] % 2 != 0) {
                ans = maxi;
            }
        }
        return ans;
    }
};