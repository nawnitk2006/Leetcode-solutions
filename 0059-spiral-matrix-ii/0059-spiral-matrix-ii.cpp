class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int>(n));

        int srow = 0;
        int erow = n - 1;
        int scol = 0;
        int ecol = n - 1;

        int num = 1;

        while (srow <= erow && scol <= ecol) {

            // Top Row
            for (int i = scol; i <= ecol; i++) {
                ans[srow][i] = num++;
            }
            srow++;

            // Right Column
            for (int i = srow; i <= erow; i++) {
                ans[i][ecol] = num++;
            }
            ecol--;

            // Bottom Row
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans[erow][i] = num++;
                }
                erow--;
            }

            // Left Column
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans[i][scol] = num++;
                }
                scol++;
            }
        }

        return ans;
    }
};