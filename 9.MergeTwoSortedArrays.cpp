class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                swap(nums1[k],nums1[i]);
                k--, i--;
            }
            else{
                swap(nums1[k],nums2[j]);
                k--, j--;
            }
        }
        i++, j=0;
        while(i<m || j<n){
            if(nums2[j]==0) break;
            nums1[i++]=nums2[j++];
        }
    }
};