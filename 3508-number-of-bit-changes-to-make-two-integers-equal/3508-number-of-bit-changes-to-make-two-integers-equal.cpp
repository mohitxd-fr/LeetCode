class Solution {
public:
    int minChanges(int n, int k) {
        int count = 0;
        if((n & k) != k)
        {
            return -1;
        }
        for(int i=0;i<32;i++)
        {
            if((n & (1 << i)) && !(k & (1 << i)))
            {
                count++;
            }
        }
        return count;
    }
};