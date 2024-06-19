class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int x = pref[0];
        vector<int> v(n, x);
        for(int i=1;i<n;i++)
        {
            v[i] = x ^ pref[i];
            x = pref[i];
        }
        return v;
    }
};