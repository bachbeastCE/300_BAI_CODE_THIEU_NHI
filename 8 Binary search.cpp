class Solution {
public:
    int binary_sreach(vector<int>& nums, int target, int high, int low){
        if (high >= low){
            int mid = (high + low) /2;
            if(nums[mid] ==  target) return mid;
            else if (nums[mid] < target ) return binary_sreach (nums, target, high, mid + 1);
            else  return binary_sreach (nums, target, mid - 1, low);
        }
        else 
            return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return binary_sreach(nums,target,nums.size()-1, 0);
    }
};