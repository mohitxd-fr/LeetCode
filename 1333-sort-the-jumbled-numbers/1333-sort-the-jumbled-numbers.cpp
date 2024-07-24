class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> v(n);

        for(int i=0;i<n;i++)
        {
            int originalNum = nums[i];
            int mappedNum = (originalNum == 0) ? mapping[0] : 0;
            int placeValue = 1;

            while(originalNum > 0)
            {
                int digit = originalNum % 10;
                mappedNum += placeValue * mapping[digit];
                originalNum /= 10;
                placeValue *= 10;
            }
            v[i] = {mappedNum, i};
        }

        sort(v.begin(), v.end());

        vector<int> ans;
        for(auto& pair : v)
        {
            ans.push_back(nums[pair.second]);
        }
        return ans;
    }
};
