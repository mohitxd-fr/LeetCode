class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0)
        {
            return {};
        }
        if(arr.size() == 1)
        {
            return {1};
        }
        map<int,int> mp;
        vector<int> res(arr.begin(),arr.end());
        sort(res.begin(),res.end());
        int count = 1;
        mp[res[0]] = count;
        for(int i=1;i<arr.size();i++)
        {
            if(res[i] == res[i-1])
            {
                mp[res[i]] = count;
            }
            else
            {
                mp[res[i]] = ++count;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};