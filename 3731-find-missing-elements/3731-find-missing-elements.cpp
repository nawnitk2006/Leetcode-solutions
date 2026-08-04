class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int mini=nums[0];
        int maxi=nums[n-1];
        vector<int>ans;
        int i = 0;

for(int current = mini; current <= maxi; current++)
{
    if(i < n && nums[i] == current)
        i++;
    else
        ans.push_back(current);
}

return ans;
        
    }
};