class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        // Make nums1 the smaller array
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        for (int i = 0; i < nums1.size(); i++) {

            bool found = false;

            // Search nums1[i] in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            // If found, check duplicate in answer
            if (found) {
                bool already = false;

                for (int k = 0; k < ans.size(); k++) {
                    if (ans[k] == nums1[i]) {
                        already = true;
                        break;
                    }
                }

                if (!already) {
                    ans.push_back(nums1[i]);
                }
            }
        }

        return ans;
    }
};