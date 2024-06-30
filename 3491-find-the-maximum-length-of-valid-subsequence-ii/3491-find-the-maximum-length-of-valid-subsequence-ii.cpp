class Solution {
    void table(vector<int>& nums, int k, vector<vector<int>>& dp)
    {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int remainder = (nums[i] + nums[j]) % k;
                dp[i][remainder] = max(dp[i][remainder], dp[j][remainder] + 1);
            }
        }
    }
    
public:
    int maximumLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(k, 1));
        table(nums, k, dp);

        int maxLength = 0;
        for (auto& row : dp)
        {
            for (int length : row)
            {
                maxLength = max(maxLength, length);
            }
        }
        return maxLength;
    }
};