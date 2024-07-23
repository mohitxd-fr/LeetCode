class Solution {
    int findPeakElement(vector<int> nums)
    {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] < nums[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }
    bool checkLeft(vector<int> v, int peek)
    {
        for(int i=0;i<peek;i++)
        {
            if(v[i] >= v[i+1])
            {
                return false;
            }
        }
        return true;
    }
    bool checkRight(vector<int> v, int peek)
    {
        for(int i=peek+1;i<v.size();i++)
        {
            if(v[i] >= v[i-1])
            {
                return false;
            }
        }
        return true;
    }
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
        {
            return false;
        }
        int peek = findPeakElement(arr);
        bool left = checkLeft(arr, peek);
        bool right = checkRight(arr, peek);
        if(peek == 0 || peek == arr.size() - 1)
        {
            return false;
        }
        if(left && right)
        {
            return true;
        }
        return false;
    }
};