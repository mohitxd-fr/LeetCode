class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<long long> v(n,0);
        for(auto a : roads)
        {
            v[a[0]]++;
            v[a[1]]++;
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for(long long i=0;i<n;i++)
        {
            ans = ans + ((i+1) * v[i]);
        }
        return ans;
    }
};