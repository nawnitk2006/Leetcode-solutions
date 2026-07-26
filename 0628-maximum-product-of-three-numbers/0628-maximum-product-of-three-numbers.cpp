class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    for(int i=0;i<nums.size()-1;i++){
            int small=i;;
            for(int j=i+1;j<nums.size();j++){
                if(nums[small]>nums[j]){
                    small=j;
            }
            }
            swap(nums[i],nums[small]);
        }
        int n=nums.size();
        int max1=nums[n-1]*nums[n-2]*nums[n-3];
        int max2=nums[0]*nums[1]*nums[n-1];
       int maximum=max(max1,max2);
       return maximum;
    }
};