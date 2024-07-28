class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(string s : words)
        {
            string temp = "";
            for(char ch : s)
            {
                if(ch == separator && temp != "")
                {
                    ans.push_back(temp);
                    temp = "";
                }
                if(ch != separator)
                {
                    temp.push_back(ch);
                }
            }
            if(temp != "")
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};