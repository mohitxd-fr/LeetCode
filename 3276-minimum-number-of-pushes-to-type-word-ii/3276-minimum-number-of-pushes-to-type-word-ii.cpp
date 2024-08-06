class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        unordered_map<char, int> mp;
        for(char c : word)
        {
            mp[c]++;
        }
        vector<int> v;
        for(auto c : mp)
        {
            v.push_back(c.second);
        }
        sort(v.rbegin(),v.rend());
        int ans = 0;
        int count = 0;

        for(int p : v)
        {
            count++;
            if(count <= 8)
            {
                ans += 1 * p;
            }
            else if(count <= 16)
            {
                ans += 2 * p;
            }
            else if(count <= 24)
            {
                ans += 3 * p;
            }
            else
            {
                ans += 4 * p;
            }
        }
        return ans;
    }
};