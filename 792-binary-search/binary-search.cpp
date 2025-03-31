class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int low, int high){
        if(low > high) return -1;
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid] < target) return binarysearch(nums, target, mid+1, high);
        return binarysearch(nums, target, low, high-1);
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binarysearch(nums, target, 0, nums.size()-1);
    }
};