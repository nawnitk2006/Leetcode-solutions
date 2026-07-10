class Solution {
public:

    int firstPosition(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans1 = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == nums[mid]) {
                ans1 = mid;
                end = mid - 1;     
            }
            else if (target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans1;
    }

    int lastPosition(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans2 = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == nums[mid]) {
                ans2 = mid;
                start = mid + 1;    
            }
            else if (target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans2;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstPosition(nums, target);
        int last = lastPosition(nums, target);

        return {first, last};
    }
};