class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        if(n < 3)
        {
            return 0;
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(colors[i] != colors[(i+1) % n] && colors[i] != colors[(i-1+n) % n])
            {
                count++;
            }
        }
        return count;
    }
};