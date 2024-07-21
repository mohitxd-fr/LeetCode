class Solution {
public:
    bool doesAliceWin(string s) {
        int count = 0;
        for(char ch : s)
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                count++;
            }
        }
        return count > 0;
    }
};