class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int elementSum = accumulate(nums.begin(), nums.end(), 0);
        int digitSum = 0;
        for(int i=0;i<n;i++)
        {
            string s = to_string(nums[i]);
            int m = s.size();
            for(int j=0;j<m;j++)
            {
                digitSum += s[j] - '0';
            }
        }
        int diff = abs(elementSum - digitSum);
        return diff;
    }
};