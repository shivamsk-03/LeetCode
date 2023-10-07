vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;
    sort(a.begin(),a.end());
    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    return ans;
}
