class Solution {
    int countValidSubsequence(vector<int>& nums)
    {
        int counterIP = 0;
        int counterII = 1;
        int counterP = 2;
        int counterI = 3;
        vector<int> counters(4, 0);
        vector<bool> parityFlags = {true, false};

        for(int num : nums)
        {
            int v = num % 2;
            if((v == 1 && parityFlags[counterII] == false) || (v == 0 && parityFlags[counterII] == true))
            {
                parityFlags[counterII] = !parityFlags[counterII];
                counters[counterII]++;
            }
            
            if((v == 1 && parityFlags[counterIP] == false) || (v == 0 && parityFlags[counterIP] == true))
            {
                parityFlags[counterIP] = !parityFlags[counterIP];
                counters[counterIP]++;
            }
            
            if(v)
            {
                counters[counterI]++;
            }
            if(!v)
            {
                counters[counterP]++;
            }
        }
        return *max_element(counters.begin(), counters.end());
    }
public:
    int maximumLength(std::vector<int>& nums) {
        int ans = countValidSubsequence(nums);
        return ans;
    }
};