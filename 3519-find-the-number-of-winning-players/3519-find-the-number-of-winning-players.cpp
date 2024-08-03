class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> ballCount(n);
        vector<bool> hasWon(n, false);

        for(const auto& p : pick)
        {
            int player = p[0];
            int color = p[1];

            ballCount[player][color]++;
            if(ballCount[player][color] == player + 1)
            {
                hasWon[player] = true;
            }
        }
        int winnersCount = 0;
        for(bool won : hasWon)
        {
            if(won)
            {
                winnersCount++;
            }
        }
        return winnersCount;
    }
};