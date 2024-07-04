class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int a = points[0][0];
        int b = points[0][1];
        int ans = 0;
        int n = points.size();
        for(int i=1;i<n;i++)
        {
            int maxa = abs(a - points[i][0]);
            int maxb = abs(b - points[i][1]);
            ans += max(maxa, maxb);
            a = points[i][0];
            b = points[i][1];
        }
        return ans;
    }
};