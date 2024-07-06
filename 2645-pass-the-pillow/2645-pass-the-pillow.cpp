class Solution {
public:
    int passThePillow(int n, int time) {
        int curr = 1;
        int total = 0;
        bool flag = true;
        while(total != time)
        {
            if(flag)
            {
                curr++;
                if(curr == n)
                {
                    flag = false;
                }
            }
            else
            {
                curr--;
                if(curr == 1)
                {
                    flag = true;
                }
            }
            total++;
        }
        return curr;
    }
};