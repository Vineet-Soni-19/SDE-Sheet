class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,num,ans;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                num=nums[i];
            }
            if(num==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return num;
    }
};