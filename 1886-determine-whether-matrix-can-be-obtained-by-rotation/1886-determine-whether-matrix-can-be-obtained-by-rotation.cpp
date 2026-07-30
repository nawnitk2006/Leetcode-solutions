class Solution {
public:
void rotate90(vector<vector<int>>& mat) {
        int n = mat.size();

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;

            while (left < right) {
                swap(mat[i][left], mat[i][right]);
                left++;
                right--;
            }
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++) {

            if (mat == target)
                return true;

            rotate90(mat);
        }

        return false;
    } 
};