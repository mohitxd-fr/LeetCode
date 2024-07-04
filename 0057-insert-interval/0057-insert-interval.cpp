class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        if(n <= 1)
        {
            return intervals;
        }
        vector<vector<int>> v;
        vector<int> prev = intervals[0];

        for (int i=1;i<n;i++)
        {
            vector<int> interval = intervals[i];
            if(interval[0] <= prev[1])
            {
                prev[1] = max(prev[1], interval[1]);
            }
            else
            {
                v.push_back(prev);
                prev = interval;
            }
        }
        v.push_back(prev);
        return v;
    }
};