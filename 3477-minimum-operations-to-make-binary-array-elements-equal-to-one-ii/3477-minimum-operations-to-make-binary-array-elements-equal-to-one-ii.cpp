class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operations = 0;
        bool flipped = false;

        for(int i=0;i<n;i++)
        {
            if(nums[i] == flipped)
            {
                operations++;
                flipped = !flipped;
            }
        }
        return operations;
    }
};