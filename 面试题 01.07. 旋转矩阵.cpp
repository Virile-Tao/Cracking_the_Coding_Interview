class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //时间复杂度O(n^2)，空间复杂度O(1)
        int n = matrix.size();
        int temp;
        for (int i=0; i<n/2; ++i)
        {
            for (int j=i; j<n-1-i; ++j)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = temp;
            }
        }
    }
};
