// Method returns sum of maximum of all subsets in O(nlogn)
int sumOfMaximumOfSubsets(vector<int>arr){
    sort(rall(arr));
    int n=sz(arr);
    int sum=arr[0];
    for(int i=1;i<n; i++){
        sum=2*sum+arr[i]; //sum = a[0]*2^(N-1) + a[1]*2^(N-2) ….. + a[i]*2^(N-i-1) + ….. + a[N-1]*2^(0) 
    }
    return sum;
}
