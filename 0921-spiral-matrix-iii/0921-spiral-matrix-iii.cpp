class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int i = rStart, j = cStart;
        int diri = 0;
        int dirj = 1;
        int twice = 2;
        vector<vector<int>> res;
        int moves = 1;
        int nextMove = 2;

        while(res.size() < rows * cols)
        {
            if(i >= 0 && i < rows && j >= 0 && j < cols)
            {
                res.push_back({i, j});
            }

            i += diri;
            j += dirj;
            moves -= 1;
            if(moves == 0)
            {
                int temp = diri;
                diri = dirj;
                dirj = -temp;
                twice -= 1;
                if(twice == 0)
                {
                    twice = 2;
                    moves = nextMove;
                    nextMove += 1;
                }
                else
                {
                    moves = nextMove - 1;
                }
            }
        }
        return res;
    }
};