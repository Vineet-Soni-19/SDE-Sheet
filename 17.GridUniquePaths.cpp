class Solution {
public:
    int uniquePaths(int m, int n) {
        m--, n--;
        int x=m+n;
        long ans=1;
        if(n<m){
            n=m+n;
            m=n-m;
            n=n-m;
        }
        for(int i=n+1, j=1; i<=m+n; i++, j++){
            ans*=i;
            ans/=j;
        }
        return (int)ans;
    }
};