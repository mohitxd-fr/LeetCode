class Solution {
public:
    string losingPlayer(int x, int y) {
        bool check = true;
        while(true)
        {
            if(check)
            {
                if(x >= 1 && y >= 4)
                {
                    x -= 1;
                    y -= 4;
                    check = false;
                }
                else
                {
                    return "Bob";
                }
            }
            else if(!check)
            {
                if(x >= 1 && y >= 4)
                {
                    x -= 1;
                    y -= 4;
                    check = true;
                }
                else
                {
                    return "Alice";
                }
            }
        }
    }
};