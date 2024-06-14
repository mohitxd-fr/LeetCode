class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int num = 0;
        int count = 0;

        for(int i=0;i<n;i++)
        {
            num = max(num,nums[i]);
            count = count + num - nums[i];
            num = num + 1;
        }
        return count;
    }
};