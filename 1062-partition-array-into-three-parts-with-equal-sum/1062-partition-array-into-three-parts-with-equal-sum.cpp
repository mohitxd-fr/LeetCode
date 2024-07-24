class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int total = accumulate(arr.begin(), arr.end(), 0);
        if(total % 3 != 0)
        {
            return false;
        }
        int sum = 0;
        int parts = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum == (parts + 1) * total / 3)
            {
                parts++;
            }
        }
        return parts >= 3;
    }
};