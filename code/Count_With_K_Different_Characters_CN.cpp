int countSubStrings(string str, int k) 
{
    // Write your code here.
    map<char,int>mp;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
            mp[str[j]]++;
            if(mp.size()==k)
            {
                count++;
            }
            else if(mp.size()==k+1)
            {
                break;
            }
        }
        mp.clear();
    }
    return count;

}
