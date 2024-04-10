class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j-1]==nums[j]) continue;
                long diff=target-(long)(nums[i]+nums[j]);
                int k=j+1, l=n-1;
                while(k<l){
                    if(nums[k]+nums[l]>diff){
                        l--;
                    }
                    else if(nums[k]+nums[l]<diff){
                        k++;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++, l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};