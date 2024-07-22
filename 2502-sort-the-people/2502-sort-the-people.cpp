class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> s;
        int n = heights.size();
        unordered_map<int,string> mp;
        for(int i=0;i<n;i++)
        {
            mp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<n;i++)
        {
            s.push_back(mp[heights[i]]);
        }
        return s;
    }
};