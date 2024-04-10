class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it: nums) st.insert(it);
        int maxi=0;
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int count=1;
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    count++;
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};