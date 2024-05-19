class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int lower = lower_bound(arr,arr +n,k) - arr;
        if(lower == 0){
            return arr[lower];
        }
        else if(abs(arr[lower] - k) > abs(arr[lower - 1] - k)){
            return arr[lower - 1];
        }
        return arr[lower];
    } 
};
