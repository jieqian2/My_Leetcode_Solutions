
class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int len = s.length();
        vector<vector<int> > hash(len + 1, vector<int>(26, 0));
        for (int i = 0; i < len; i++)
        {
            hash[i + 1].assign(hash[i].begin(), hash[i].end());
            hash[i + 1][s[i] - 'a']++;
        }
        int qlen = queries.size();
        vector<bool> ans;
        for (int i = 0; i < qlen; i++)
        {
            int count = 0;
            for (int j = 0; j < 26; j++) count += (hash[queries[i][1] + 1][j] - hash[queries[i][0]][j]) % 2;
            ans.push_back(count / 2 <= queries[i][2]);
        }
        return ans;
    }
};
