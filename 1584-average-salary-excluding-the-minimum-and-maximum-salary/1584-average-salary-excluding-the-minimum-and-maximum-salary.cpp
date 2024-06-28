class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double total = 0;
        sort(salary.begin(),salary.end());
        
        for(int i=1;i<n-1;i++)
        {
            total = total + salary[i];
        }
        total = total / (n-2);
        return total;
    }
};