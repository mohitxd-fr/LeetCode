class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char ch : s)
        {
            mp[ch]++;
        }
        auto it = mp.begin();
        int curr = it-> second;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(curr != it-> second)
            {
                return false;
            }
        }
        return true;
    }
};