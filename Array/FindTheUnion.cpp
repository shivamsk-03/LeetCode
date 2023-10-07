vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int>ans;
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            if(ans.back()!=a[i] || ans.empty()){
            ans.push_back(a[i]);
            }
            i++;
        }
        else if(a[i]>b[j]){
            if(ans.back()!=b[j] || ans.empty()){
             ans.push_back(b[j]);
            }
            j++;
        } 
        else{
            if (ans.back() != a[i] || ans.empty()) {
             ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    while(i<a.size()){
        if(ans.back()!=a[i] || ans.empty()){
        ans.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size()){
        if(ans.back()!=b[j] || ans.empty()){
            ans.push_back(b[j]);
        }
         j++;
    }
    return ans;
}