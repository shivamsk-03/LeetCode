class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=nums[i+1]){
               ans++;
               nums[ans]=nums[i];
           }
       } 
       return ans;
    }
};