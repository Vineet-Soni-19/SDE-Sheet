class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int l=0, r=n-1;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            else if(matrix[mid][0]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(mid<1) return false;
        int ind=mid-1;
        l=0, r=m-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(matrix[ind][mid]==target){
                return true;
            }
            else if(matrix[ind][mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};