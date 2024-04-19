int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i=1, j=0, count=1;
    int maxi=1;
    while(i<n){
        while(arr[i]>dep[j]){
            count--;
            j++;
        }
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        maxi=max(count,maxi);
    }
    return maxi;
}