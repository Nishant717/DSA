class Solution {
public:
    int beautySum(string s) {
        int res = 0; // Initialize the result variable
        // Iterate over all substrings of the input string
        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int>
                mp; // Map to store the frequency of characters in the substring
            // Iterate over the characters in the substring starting from index
            // i
            for (int j = i; j < s.length(); j++) {
                mp[s[j]]++; // Update the frequency of the current character

                // Check if all characters in the substring are the same
                if (mp.size() == 1) {
                    res += 0; // If all characters are the same, incrementing
                              // the result by 0
                } else {
                    int minn = INT_MAX; // Variable to store the minimum
                                        // frequency of characters
                    int maxx = INT_MIN; // Variable to store the maximum
                                        // frequency of characters

                    // Iterate over the entries in the map
                    for (auto it = mp.begin(); it != mp.end(); it++) {
                        minn = min(minn,it->second); // Update the minimum frequency
                        maxx = max(maxx,it->second); // Update the maximum frequency
                    }

                    res =res + (maxx - minn); // Increment the result by the difference
                                             // between max and min frequencies
                }
            }
        }
        return res; // Return the final result
    }
};