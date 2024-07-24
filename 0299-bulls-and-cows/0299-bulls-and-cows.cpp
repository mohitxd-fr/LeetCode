class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int bulls = 0;
        int cows = 0;
        unordered_map<char, int> mp;
        for(char ch : secret)
        {
            mp[ch]++;
        }
        for(char ch : guess)
        {
            if(mp.find(ch) != mp.end() && mp[ch] > 0)
            {
                cows++;
                mp[ch]--;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
            }
        }
        cows = cows - bulls;
        string ans = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return ans;
    }
};