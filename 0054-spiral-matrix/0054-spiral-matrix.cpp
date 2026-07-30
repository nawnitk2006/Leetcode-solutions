class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int erow = matrix.size() - 1;
        int ecol = matrix[0].size() - 1;

        int total = matrix.size() * matrix[0].size();
        int count = 0;

        int srow = 0;
        int scol = 0;

        vector<int> ans;

        while (count < total) {

            // Top Row
            for (int i = scol; count < total && i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;

            // Right Column
            for (int i = srow; count < total && i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;

            // Bottom Row
            for (int i = ecol; count < total && i >= scol; i--) {
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;

            // Left Column
            for (int i = erow; count < total && i >= srow; i--) {
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }

        return ans;
    }
};