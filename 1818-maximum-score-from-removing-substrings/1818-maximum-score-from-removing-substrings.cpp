class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res = 0;
        string top = "";
        string bot = "";
        int topScore = 0;
        int botScore = 0;

        if(y > x)
        {
            top = "ba";
            topScore = y;
            bot = "ab";
            botScore = x;
        }
        else
        {
            top = "ab";
            topScore = x;
            bot = "ba";
            botScore = y;
        }

        vector<char> oldStack;
        for(char ch : s)
        {
            if(ch == top[1] && !oldStack.empty() && oldStack.back() == top[0])
            {
                res += topScore;
                oldStack.pop_back();
            }
            else
            {
                oldStack.push_back(ch);
            }
        }

        vector<char> newStack;
        for(char ch : oldStack)
        {
            if(ch == bot[1] && !newStack.empty() && newStack.back() == bot[0])
            {
                res += botScore;
                newStack.pop_back();
            }
            else
            {
                newStack.push_back(ch);
            }
        }
        return res;
    }
};