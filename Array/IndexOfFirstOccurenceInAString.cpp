class Solution {
public:
    bool check(string haystack,int i, string needle){
        bool ans = true;
        for(int j=0;j<needle.size();i++,j++){
            if(needle[j]!=haystack[i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (needle.size() > haystack.size()) return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            if(haystack[i]==needle[0]){
                if(check(haystack,i,needle)){
                    return i;
                }
            }
        }
        return -1;
    }
};