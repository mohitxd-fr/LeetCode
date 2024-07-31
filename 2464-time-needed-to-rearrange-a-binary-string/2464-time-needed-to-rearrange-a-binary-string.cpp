class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int count = 0;
        int n = s.size();
        while(true)
        {
            bool flag = true;
            for(int i=0;i<n-1;i++)
            {
                if(s[i] == '0' && s[i+1] == '1')
                {
                    swap(s[i], s[i + 1]);
                    i++;
                    flag = false;
                }
            }
            if(flag)
            {
                break;
            }
            count++;
        }
        return count;
    }
};