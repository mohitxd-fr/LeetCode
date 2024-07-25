class Solution {
public:
    int rob(vector<int>& nums) {
        int prevMax = 0; 
        int currMax = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int temp = max(nums[i] + prevMax, currMax);
            prevMax = currMax;
            currMax = temp;
        }
        return currMax;
    }
};