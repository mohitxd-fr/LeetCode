class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int maxOcc = INT_MIN;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            maxOcc = max(maxOcc, it-> second);
        }
        for(int i=0;i<maxOcc;i++)
        {
            vector<int> temp;
            for(auto it = mp.begin();it != mp.end();it++)
            {
                if(it-> second != 0)
                {
                    temp.push_back(it-> first);
                    it-> second--;
                }
            }
            v.push_back(temp);
        }
        return v;
    }
};