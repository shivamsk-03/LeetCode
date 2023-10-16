class Solution {
public:
    void checkInc(bool &inc,vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1])inc = true;
            else{
                inc=false;
                break;
            }
        }
    }
    void checkDec(bool &dec,vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1])dec = true;
            else{
                dec=false;
                break;
            }
        }
    }
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)return true;
        bool inc = false;
        bool dec = false;
        checkInc(inc,nums);
        checkDec(dec,nums);
        return inc||dec;
    }
};