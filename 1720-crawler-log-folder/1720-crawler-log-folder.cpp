class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> v;
        for(string& log : logs)
        {
            if(log == "../")
            {
                if(!v.empty())
                {
                    v.pop_back();
                }
            }
            else if(log != "./")
            {
                v.push_back(log);
            }
        }
        return v.size();
    }
};