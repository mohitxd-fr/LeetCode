class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m)
        {
            return false;
        }
        unordered_map<char, char> st;
        unordered_map<char, char> ts;

        for(int i=0;i<n;i++)
        {
            char sChar = s[i];
            char tChar = t[i];

            if(st.find(sChar) == st.end() && ts.find(tChar) == ts.end())
            {
                st[sChar] = tChar;
                ts[tChar] = sChar;
            }
            else if(st[sChar] != tChar && ts[tChar] != sChar)
            {
                return false;
            }
        }
        return true;
    }
};