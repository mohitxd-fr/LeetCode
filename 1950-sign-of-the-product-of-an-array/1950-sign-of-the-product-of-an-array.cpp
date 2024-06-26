class Solution {
    int signFunc(int product)
    {
        if(product > 0) 
        {
            return 1;
        }
        else if(product < 0)
        {
            return -1;
        }
        return 0;
    }
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = -1;
            }
            else if(nums[i] > 0)
            {
                nums[i] = 1;
            }
            else
            {
                return 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            product = product * nums[i];
        }
        int ans = signFunc(product);
        return ans;
    }
};