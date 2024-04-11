class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0, j=0, ans=0;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp[s[j]]>1){
                while(mp[s[j]]>1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            if(mp.size()>ans){
                ans=mp.size();
            }
            j++;
        }
        return ans;
    }
};