class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            string temp = details[i];
            int first = temp[11] - '0';
            int second = temp[12] - '0';
            int final = first * 10 + second;
            if(final > 60)
            {
                count += 1;
            }
        }
        return count;
    }
};