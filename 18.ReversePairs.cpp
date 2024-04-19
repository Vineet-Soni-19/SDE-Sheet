class Solution {
    void merge(vector<int> &nums, int low, int mid, int high){
        int l=low, r=mid+1;
        int temp[high-low+1];
        int k=0;
        while(l<=mid && r<=high){
            if(nums[l]<=nums[r]){
                temp[k++]=nums[l++];
            }
            else{
                temp[k++]=nums[r++];
            }
        }
        while(l<=mid){
            temp[k++]=nums[l++];
        }
        while(r<=high){
            temp[k++]=nums[r++];
        }
        for(int i=0; i<k; i++){
            nums[i+low]=temp[i];
        }
    }
    int countReverse(vector<int> &nums, int low, int mid, int high){
        int right=mid+1, cnt=0;
        for(int i=low; i<=mid; i++){
            while(right<=high && nums[i]>(long long)2*nums[right]) right++;
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    int mergeSort(vector<int> &nums, int low, int high){
        if(low>=high) return 0;
        int mid=(low+high)/2;
        int cnt=0;
        cnt+=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=countReverse(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int count=mergeSort(nums,0,n-1);
        return count;
    }
};