class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        long long count = 0;
        int n = enemyEnergies.size();
        sort(enemyEnergies.begin(),enemyEnergies.end());

        int i = 0;
        int j = n - 1;
        
        while(i <= j)
        {
            if(enemyEnergies[i] > currentEnergy)
            {
                if(count == 0)
                {
                    return 0;
                }
                while(currentEnergy < enemyEnergies[i])
                {
                    currentEnergy += enemyEnergies[j];
                    j--;
                }
            }
            else
            {
                int temp = currentEnergy / enemyEnergies[i];
                currentEnergy %= enemyEnergies[i];
                count += temp;
            }
        }
        return count;
    }
};