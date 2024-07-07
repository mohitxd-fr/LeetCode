class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        while(numBottles >= numExchange)
        {
            int temp = numBottles / numExchange;
            int rem = numBottles % numExchange;
            count += temp;
            numBottles = temp + rem;
        }
        return count;
    }
};