class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<bool> v(n, false);
        vector<unordered_map<int, int>> ballCount(n);

        for(auto& p : pick)
        {
            int player = p[0];
            int color = p[1];

            ballCount[player][color]++;
            if(ballCount[player][color] == player + 1)
            {
                v[player] = true;
            }
        }
        int winnersCount = 0;
        for(bool won : v)
        {
            if(won)
            {
                winnersCount++;
            }
        }
        return winnersCount;
    }
};