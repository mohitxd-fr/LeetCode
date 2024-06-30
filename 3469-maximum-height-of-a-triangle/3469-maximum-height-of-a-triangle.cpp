class Solution {
    bool canBuildRow(int balls,int row)
    {
        return balls >= row;
    }
    void buildRow(int &balls, int row)
    {
        balls -= row;
    }
    int check(int red, int blue)
    {
        int height = 0;
        for(int row=1; ;row++)
        {
            if(row % 2 == 1)
            {
                if(canBuildRow(red, row))
                {
                    buildRow(red, row);
                    height++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(canBuildRow(blue, row))
                {
                    buildRow(blue, row);
                    height++;
                }
                else
                {
                    break;
                }
            }
        }
        return height;
    }
public:
    int maxHeightOfTriangle(int red, int blue) {
        int checkRed = check(red, blue);
        int checkBlue = check(blue, red);
        
        int ans = max(checkRed, checkBlue);
        return ans;
    }
};