class Solution {
public:
    string longestPalindrome(string s) {
        // string first;
        // string second;
        // string answer;
        // string result = "";
        // for(int i=0;i<s.length();i++)
        // {
        //     for(int j=0;j<s.length();j++)
        //     {                                   
        //         first += s[j];
        //        int len=first.length()-1;
            
        //         if(first[0]==first[len])
        //         {
        //             int start=0;
	    //             int end=first.length()-1;
	    //             while(start<=end)
	    //             {
	    //                 if(first[start]==first[end])
	    //                 {
	    //                     start++;
	    //                     end--;
        //                     continue;
	    //                 }
        //                 else
        //                 {
        //                     break;
        //                 }
        //                 answer = first;
	    //             }
        //         }
        //         int size = answer.length();
        //         if(size>result.length())
        //         {
        //             result = answer;
        //         }
        //     }
        // }
        // return result;
        string result = "";

    for (int i = 0; i < s.length(); i++) {
        string first = "";
        for (int j = i; j < s.length(); j++) {
            first += s[j];
            int len = first.length() - 1;

            if (first[0] == first[len]) {
                int start = 0;
                int end = first.length() - 1;
                while (start <= end) {
                    if (first[start] == first[end]) {
                        start++;
                        end--;
                        continue;
                    } else {
                        break;
                    }
                }
                if (start > end) {
                    result = (first.length() > result.length()) ? first : result;
                }
            }
        }
    }

    return result;
    }
};