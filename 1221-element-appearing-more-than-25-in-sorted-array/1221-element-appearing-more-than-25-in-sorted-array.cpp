class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int num : arr)
        {
            mp[num]++;
            if(mp[num] > (arr.size()/4))
            {
                return num;
            }
        }
        return -1;
    }
};