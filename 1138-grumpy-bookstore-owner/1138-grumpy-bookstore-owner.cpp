class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int initial = 0;
        int maxi = 0;
        int current = 0;
        
        for(int i=0;i<n;i++)
        {
            if(grumpy[i] == 0)
            {
                initial = initial + customers[i];
            }
            else if(i < minutes)
            {
                current = current + customers[i];
            }
        }
        maxi = current;
        
        for(int i=minutes;i<n;i++)
        {
            current = current + customers[i] * grumpy[i];
            current = current - customers[i - minutes] * grumpy[i - minutes];
            maxi = max(maxi,current);
        }
        return initial + maxi;   
    }
};