class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> hs;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<s.size()){
            if(hs.find(s[j])==hs.end()){
                maxi = max(maxi,j-i+1);
                hs.insert(s[j]);
                j++;
            }
            else
            {
                hs.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};
