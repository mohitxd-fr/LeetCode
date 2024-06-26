void reverseRows(vector<vector<int>>& matrix)
{
    for(auto& row : matrix)
    {
        reverse(row.begin(), row.end());
    }
}

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();
        reverseRows(image);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                (image[i][j] == 0) ? image[i][j] = 1 : image[i][j] = 0;
            }
        }
        return image;
    }
};