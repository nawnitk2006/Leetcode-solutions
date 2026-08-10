class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first_max = LLONG_MIN;
        long long second_max = LLONG_MIN;
        long long third_max = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            //  duplicate values
            if (nums[i] == first_max ||
                nums[i] == second_max ||
                nums[i] == third_max) {
                continue;
            }

            if (nums[i] > first_max) {
                third_max = second_max;
                second_max = first_max;
                first_max = nums[i];
            }
            else if (nums[i] > second_max) {
                third_max = second_max;
                second_max = nums[i];
            }
            else if (nums[i] > third_max) {
                third_max = nums[i];
            }
        }

        
        if (third_max == LLONG_MIN) {
            return first_max;
        }

        return third_max;
    }
};