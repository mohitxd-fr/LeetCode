class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> ps;
        unordered_map<string, char> sp;
        int i = 0;
        int j = 0;
        int m = pattern.size();
        int n = s.size();

        while(i < m && j < n)
        {
            string str;
            while(j < n && s[j] != ' ')
            {
                str.push_back(s[j]);
                j++;
            }
            if(ps.find(pattern[i]) == ps.end() && i < m)
            {
                ps[pattern[i]] = str;
            }
            else if(ps.find(pattern[i]) != ps.end() && ps[pattern[i]] != str)
            {
                return false;
            }
            if(sp.find(str) == sp.end())
            {
                sp[str] = pattern[i];
            }
            else if(sp.find(str) != sp.end() && sp[str] != pattern[i])
            {
                return false;
            }
            i++;
            j++;
        }
        if(i != m)
        {
            return false;
        }
        if(j != n+1)
        {
            return false;
        }
        return true;
    }
};