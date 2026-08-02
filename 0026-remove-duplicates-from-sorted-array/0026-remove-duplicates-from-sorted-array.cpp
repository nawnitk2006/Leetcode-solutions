class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
      if(n==0){
        return 0;
      }  
      int i=0;
      for(int j=0;j<n;){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
        else
        j++;
      }
      return i+1;
    }
};