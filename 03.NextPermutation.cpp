#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int dip=n-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                dip=i;
                break;
            }
        }
        int nextG=INT_MAX, ind=-1;
        for(int i=dip; i<n; i++){
            if(nums[i]>nums[dip] && nums[i]<nextG){
                nextG=nums[i];
                ind=i;
            }
        }
        if(nextG==INT_MAX){
            sort(nums.begin(), nums.end());
            return;
        }
        swap(nums[dip],nums[ind]);
        sort(nums.begin()+dip+1, nums.end());
    }
};