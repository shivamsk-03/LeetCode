class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,n;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};