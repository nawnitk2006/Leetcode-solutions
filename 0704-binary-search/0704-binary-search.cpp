class Solution {
public:
    int search(vector<int>& nums, int target) {
       int start=0;
       int end=nums.size()-1;
       int mid=start+(end-start)/2; 
       //when we write mid=(start+end)/2 then TLE if two maximum integer added then out of range of an interger 
    while(start<=end){
        if(nums[mid]==target){
            return mid;
        }
        if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2;
    }
    return -1;
    }
};