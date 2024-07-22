class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            s += s[i];
            string sub = s.substr(i+1,n+1);
            if(sub == goal)
            {
                return true;
            }
        }
        return false;
    }
};