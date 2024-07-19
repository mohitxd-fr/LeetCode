class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            int num = INT_MAX;
            int index = -1;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] < num)
                {
                    num = matrix[i][j];
                    index = j;
                }
            }
            bool flag = true;
            for(int row = 0; row < n; row++)
            {
                if(matrix[row][index] > num)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                v.push_back(num);
            }
        }
        return v;
    }
};