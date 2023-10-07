class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int current =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                current++;
                ans = max(ans,current);
            }
            else{
                current = 0;
            }
        }
        return ans;
    }
};