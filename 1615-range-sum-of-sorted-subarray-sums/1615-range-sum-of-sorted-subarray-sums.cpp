class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int prefix = 0;
            for(int j=i;j<n;j++)
            {
                prefix += nums[j];
                v.push_back(prefix);
            }
        }
        sort(v.begin(), v.end());
        int result = 0;
        int MOD = 1000000007;
        for(int i=left-1;i<right;i++)
        {
            result = (result + v[i]) % MOD;
        }
        return result;
    }
};