class Solution {
public:

    int binarySearchAsc(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int mid = s+(e-s)/2;
        int result = -1;
        while(s<=e){
            if(nums[mid]==target) {
                result =mid;
                e = mid-1;
            }
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
            mid = s+(e-s)/2;
        }
        return result;
    }
    int binarySearchDesc(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int mid = s+(e-s)/2;
        int result = -1;
        while(s<=e){
            if(nums[mid]==target) {
                result = mid;
                s=mid+1;
            }
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
            mid = s+(e-s)/2;
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(binarySearchAsc(nums,target));
        ans.push_back(binarySearchDesc(nums,target));
        return ans;
    }
};