class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string newS = "";
        for(int i=0;i<n;i++)
        {
            int temp = (i + k) % n;
            newS.push_back(s[temp]);
        }
        return newS;
    }
};