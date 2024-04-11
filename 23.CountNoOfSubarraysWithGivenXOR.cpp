int Solution::solve(vector<int> &A, int B) {
    int xr=0, count=0;
    unordered_map<int,int> mp;
    for(int i=0; i<A.size(); i++){
        xr=xr^A[i];
        if(xr==B){
            count++;
        }
        int diff=xr^B;
        if(mp.find(diff)!=mp.end()){
            count+=mp[diff];
        }
        mp[xr]++;
    }
    return count;
}
