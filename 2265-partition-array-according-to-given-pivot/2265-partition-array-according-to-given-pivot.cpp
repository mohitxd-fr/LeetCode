class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> leftArray;

        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] < pivot)
            {
                leftArray.push_back(nums[i]);
            }
            else if(nums[i] == pivot)
            {
                count++;
            }
        }
        while(count != 0)
        {
            leftArray.push_back(pivot);
            count--;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i] > pivot)
            {
                leftArray.push_back(nums[i]);
            }
        }
        return leftArray;
    }
};