class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low1=0, high1=0, low2=nums.size()-1;
        while(high1<=low2){
            if(nums[high1]==0){
                swap(nums[high1],nums[low1]);
                high1++;
                low1++;
            }
            else if(nums[high1]==1){
                high1++;
            }
            else{
                swap(nums[high1],nums[low2]);
                low2--;
            }
        }
    }
};