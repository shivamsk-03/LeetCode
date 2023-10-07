class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int match_sum = (n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return match_sum-sum;
    }
};