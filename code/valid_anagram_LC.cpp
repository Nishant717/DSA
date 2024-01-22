class Solution {
public:
    bool isAnagram(string s, string t) {
        // int i;
        // map<char,int>S;
        // map<char,int>T;
        // for(i=0;i<s.length();i++)
        // {
        //     S[s[i]]++;
        // }
        // for(int i=0;i<t.length();i++)
        // {
        //     T[t[i]]++;
        // }
        // for(auto it : S)
        // {
        //     if(it.second)    // stuck how cam we iterate through tow map
        // }
        if(s.length()!=t.length())
        {
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};