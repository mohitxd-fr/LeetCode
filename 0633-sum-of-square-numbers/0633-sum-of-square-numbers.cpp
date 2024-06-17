class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_set<int> s;
        int n = sqrt(c);

        for(int i=0;i<=n;i++)
        {
            s.insert(i * i);
        }
        for(int i=0;i<=n;i++)
        {
            int temp = c - pow(i,2);
            if(s.find(temp) != s.end())
            {
                return true;
            }
        }
        return false;
    }
};