class Solution {
public:
    int countOdds(int low, int high) {
        int temp = (high - low)/2;
        if((low % 2 != 0) && (high % 2 != 0))
        {
            temp = temp + 1;
        }
        else if(((low % 2 == 0) && (high % 2 != 0)) || ((low % 2 != 0) && (high % 2 == 0)))
        {
            temp = temp + 1;
        }
        return temp;
    }
};