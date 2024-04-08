class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0, count2=0, num1,num2;
        for(int i=0; i<n; i++){
            if(count1==0 && num2!=nums[i]){
                num1=nums[i];
            }
            if(count2==0 && num1!=nums[i]){
                num2=nums[i];
            }
            if(num1==nums[i]){
                count1++;
            }
            else if(num2==nums[i]){
                count2++;
            }
            else{
                count1--, count2--;
            }
        }
        count1=0, count2=0;
        for(int i=0; i<n; i++){
            if(num1==nums[i]){
                count1++;
            }
            else if(num2==nums[i]){
                count2++;
            }
        }
        vector<int> v;
        if(count1>n/3) v.push_back(num1);
        if(count2>n/3) v.push_back(num2);
        return v;
    }
};