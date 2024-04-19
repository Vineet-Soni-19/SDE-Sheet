int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        v[i].first=end[i];
        v[i].second=start[i];
    }
    sort(v.begin(), v.end());
    int e=-1, count=0;
    for(int i=0; i<n; i++){
        if(v[i].second>e){
            count++;
            e=v[i].first;
        }
    }
    return count;
}