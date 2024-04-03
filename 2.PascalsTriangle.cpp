class Solution {
    int ncr(int n, int r){
        int ans=1;
        for(int i=0; i<r; i++){
            ans*=(n-i);
            ans/=(i+1);
        }
        return ans;
    }
    vector<int> nthrow(int n){
        vector<int> v;
        int ans=1;
        v.push_back(ans);
        for(int i=1; i<n; i++){
            ans*=(n-i);
            ans/=i;
            v.push_back(ans);
        }
        return v;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(nthrow(i));
        }
        return ans;
    }
};