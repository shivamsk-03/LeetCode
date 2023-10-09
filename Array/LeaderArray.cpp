vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        bool leader=true;
        for(int j=i;j<a.size();j++){
          if (a[j] > a[i]) {
            leader = false;
            break;
          }
        }
        if(leader == true){
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(),ans.end());
    auto new_end = unique(ans.begin(), ans.end());
    ans.erase(new_end, ans.end());
    return ans;
}