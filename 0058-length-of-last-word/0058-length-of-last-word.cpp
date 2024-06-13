class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;
        int i = n - 1;

        while(i >= 0)
        {
            if(isalpha(s[i]))
            {
                while(i >= 0)
                {
                    if(isalpha(s[i]))
                    {
                        length++;
                    }
                    else
                    {
                        return length;
                    }
                    i--;
                }
            }
            i--;
        }
        return length;
    }
};