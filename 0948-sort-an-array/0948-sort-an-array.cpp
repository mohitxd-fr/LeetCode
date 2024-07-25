class Solution {
    void merge(vector<int>& nums, int left, int mid, int right)
    {
        vector<int> merged(right - left + 1);
        int a = left;
        int b = mid + 1;
        int ind = 0;

        while(a <= mid && b <= right)
        {
            if(nums[a] <= nums[b])
            {
                merged[ind++] = nums[a++];
            }
            else
            {
                merged[ind++] = nums[b++];
            }
        }

        while(a <= mid)
        {
            merged[ind++] = nums[a++];
        }

        while(b <= right)
        {
            merged[ind++] = nums[b++];
        }

        for(int i = 0, j = left; i<merged.size(); i++, j++)
        {
            nums[j] = merged[i];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right)
    {
        if(left >= right)
        {
            return;
        }
        int mid = left + (right - left)/2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        mergeSort(nums, left, right);
        return nums;
    }
};