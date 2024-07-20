class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        vector<int> v(26, 0);
        int count = 0;
        for(auto ch : s)
        {
            v[ch - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(v[i] < 3)
            {
                continue;
            }
            if(v[i] % 2)
            {
                count += v[i] - 1;
            }
            else
            {
                count += v[i] - 2;
            }
        }
        int ans = n - count;
        return ans;
    }
};