class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle = 0;
        int sumDouble = 0;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i] <= 9)
            {
                sumSingle += nums[i];
            }
            else
            {
                sumDouble += nums[i];
            }
        }
        return (sumSingle != sumDouble) ? true : false;
    }
};