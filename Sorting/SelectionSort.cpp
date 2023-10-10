void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    for(int i=0;i<=n-2;i++){
        int m=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[m]) m=j;
        }
        swap(arr[i],arr[m]);
    }
}