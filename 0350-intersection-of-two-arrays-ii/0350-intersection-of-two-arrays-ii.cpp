class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            auto it = mp.find(nums2[i]);
            if(it != mp.end() && it-> second != 0)
            {
                v.push_back(it-> first);
                it-> second--;
            }
        }
        return v;
    }
};