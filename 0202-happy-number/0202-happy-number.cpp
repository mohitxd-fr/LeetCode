int nextNumber(int n)
{
    int newNumber = 0;
    while(n != 0)
    {
        int num = n % 10;
        newNumber = newNumber + num*num;
        n = n / 10;
    }
    return newNumber;
}

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n != 1 && !set.count(n))
        {
            set.insert(n);
            n = nextNumber(n);
        }
        return n == 1;
    }
};