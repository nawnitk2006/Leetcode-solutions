class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       int minimum = *min_element(nums.begin(), nums.end()); 
       int maximum = *max_element(nums.begin(), nums.end());
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=minimum && nums[i]!=maximum){
            return nums[i];
        }
      }
      return -1;
    }
};