class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int rowFlips = 0;
        int colFlips = 0;

        for(int i=0;i<n;i++)
        {
            int flips = 0;
            for(int left = 0, right = m - 1; left < right; left++, right--)
            {
                if(grid[i][left] != grid[i][right])
                {
                    flips++;
                }
            }
            rowFlips += flips;
        }

        for(int j=0;j<m;j++)
        {
            int flips = 0;
            for(int top = 0, bottom = n - 1; top < bottom; top++, bottom--)
            {
                if(grid[top][j] != grid[bottom][j])
                {
                    flips++;
                }
            }
            colFlips += flips;
        }
        return min(rowFlips, colFlips);
    }
};