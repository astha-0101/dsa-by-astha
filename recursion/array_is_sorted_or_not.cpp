bool isSorted(vector<int> arr,n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}