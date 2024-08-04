class neighborSum {
    vector<vector<int>> grid;
    unordered_map<int, pair<int, int>> v;
    int n;

public:
    neighborSum(vector<vector<int>>& grid) {
        this-> grid = grid;
        this-> n = grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[grid[i][j]] = {i, j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int sum = 0;
        auto [row, col] = v[value];
        if(row > 0)
        {
            sum += grid[row - 1][col];
        }
        if(row < n - 1)
        {
            sum += grid[row + 1][col];
        }
        if(col > 0)
        {
            sum += grid[row][col - 1];
        }
        if(col < n - 1)
        {
            sum += grid[row][col + 1];
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int sum = 0;
        auto [row, col] = v[value];
        if(row > 0 && col > 0)
        {
            sum += grid[row - 1][col - 1];
        }
        if(row > 0 && col < n - 1)
        {
            sum += grid[row - 1][col + 1];
        }
        if(row < n - 1 && col > 0)
        {
            sum += grid[row + 1][col - 1];
        }
        if(row < n - 1 && col < n - 1)
        {
            sum += grid[row + 1][col + 1];
        }
        return sum;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */