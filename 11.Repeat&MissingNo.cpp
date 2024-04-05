vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long long Sn = n * (n + 1LL) / 2LL;
    long long S = 0;
    for (auto it : A) {
        S += it;
    }
    long long diff = abs(Sn - S);
    
    long long S2n = n * (n + 1LL) * (2LL * n + 1LL) / 6LL;
    long long S2 = 0;
    for (auto it : A) {
        S2 += (long long)(it) * (long long)(it);
    }
    long long sum = (abs(S2n - S2)) / diff;
    
    long long miss = (diff + sum) / 2LL;
    long long rept = sum - miss;
    
    if (Sn > S) {
        return {(int)rept, (int)miss}; 
    }
    
    return {(int)miss, (int)rept};
}
