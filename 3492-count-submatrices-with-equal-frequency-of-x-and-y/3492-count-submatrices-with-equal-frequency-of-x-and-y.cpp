class Solution {
    void computePrefixSums(const vector<vector<char>>& grid, vector<vector<int>>& prefixX, vector<vector<int>>& prefixY)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=cols;j++)
            {
                prefixX[i][j] = prefixX[i-1][j] + prefixX[i][j-1] - prefixX[i-1][j-1] + (grid[i-1][j-1] == 'X' ? 1 : 0);
                prefixY[i][j] = prefixY[i-1][j] + prefixY[i][j-1] - prefixY[i-1][j-1] + (grid[i-1][j-1] == 'Y' ? 1 : 0);
            }
        }
    }
    
    int countValidSubmatrices(const vector<vector<int>>& prefixX, const vector<vector<int>>& prefixY, const vector<vector<char>>& grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int validCount = 0;
        
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=cols;j++)
            {
                int xCount = prefixX[i][j];
                int yCount = prefixY[i][j];
                
                if(isValidSubmatrix(xCount, yCount, grid[0][0]))
                {
                    ++validCount;
                }
            }
        }
        return validCount;
    }

    bool isValidSubmatrix(int xCount, int yCount, char topLeftChar)
    {
        bool temp = (xCount == yCount && xCount > 0 && (topLeftChar == 'X' || topLeftChar == 'Y' || topLeftChar == '.'));
        return temp;
    }

public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<vector<int>> prefixCountX(rows + 1, vector<int>(cols + 1, 0));
        vector<vector<int>> prefixCountY(rows + 1, vector<int>(cols + 1, 0));
        
        computePrefixSums(grid, prefixCountX, prefixCountY);
        
        return countValidSubmatrices(prefixCountX, prefixCountY, grid);
    }
};