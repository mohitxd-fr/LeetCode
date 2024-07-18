class Solution {
public:
    string sortString(string s) {
        map<char,int> mp;
        string ans = "";
        int n = s.size();
        for(char ch : s)
        {
            mp[ch]++;
        }
        int i = 0;
        bool check = true;
        while(i < n)
        {
            if(check)
            {
                for(auto it = mp.begin(); it != mp.end(); it++)
                {
                    if(it-> second >= 1)
                    {
                        ans += it-> first;
                        it-> second--;
                        i++;
                    }
                }
                check = false;
            }
            else if(!check)
            {
                auto it = mp.end();
                do
                {
                    it--;
                    if(it-> second >= 1)
                    {
                        ans += it-> first;
                        it-> second--;
                        i++;
                    }
                } while(it != mp.begin());
                check = true;
            }
        }
        return ans;
    }
};