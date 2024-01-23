class Solution {
public:
    string frequencySort(string s) {
        string answer;
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        std::vector<std::pair<char, int>> sorted_pairs(mp.begin(), mp.end());
        std::sort(sorted_pairs.begin(), sorted_pairs.end(),
            [](const auto& a, const auto& b) { return a.second > b.second; });
        for (const auto& pair : sorted_pairs) {
        answer += std::string(pair.second, pair.first);
        }
        return answer;
    }
};