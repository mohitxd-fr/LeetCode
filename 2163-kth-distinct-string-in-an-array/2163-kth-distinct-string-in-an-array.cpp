class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(string num : arr)
        {
            mp[num]++;
        }
        int count = 0;
        string ans = "";
        for(string num : arr)
        {
            if(mp[num] == 1)
            {
                count++;
            }
            if(count == k)
            {
                ans = num;
                break;
            }
        }
        return ans;
    }
};