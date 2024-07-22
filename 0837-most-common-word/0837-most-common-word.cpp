class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        string temp = "";
        for(char& ch : paragraph)
        {
            if(isalpha(ch))
            {
                ch = tolower(ch);
            }
            else
            {
                ch = ' ';
            }
        }
        stringstream ss(paragraph);
        while(ss >> temp)
        {
            if(find(banned.begin(), banned.end(), temp) == banned.end())
            {
                mp[temp]++;
            }
        }
        int maxi = 0;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(maxi < it-> second)
            {
                maxi = it-> second;
                temp = it-> first;
            }
        }
        return temp;
    }
};