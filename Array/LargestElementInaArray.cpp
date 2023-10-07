#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int next;
    int ans = arr[0];
    int i = 1;
    while(i<arr.size()){
        next = arr[i];
        ans = max(ans,next);
        i++;
    }
    return ans;
}
