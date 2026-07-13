class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if (nums[0] <= nums[n - 1]) {
            int start = 0, end = n - 1;
            while (start <= end) {
                int mid = start + (end - start) / 2;

                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            return -1;
        }

        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
        }

        int pivot = start;

        if (target >= nums[pivot] && target <= nums[n - 1]) {
            start = pivot;
            end = n - 1;
        } else {
            start = 0;
            end = pivot - 1;
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};