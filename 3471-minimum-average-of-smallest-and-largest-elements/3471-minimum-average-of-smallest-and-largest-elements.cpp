class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> avg;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            double temp = (nums[left] + nums[right]) / 2.0;
            avg.push_back(temp);
            nums.erase(nums.begin() + right);
            nums.erase(nums.begin() + left);
            right = right - 2;
        }
        return *min_element(avg.begin(),avg.end());
    }
};