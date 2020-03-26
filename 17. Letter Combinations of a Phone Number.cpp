
class Solution {
public:
    unordered_map<int, string> hash
        {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };
    vector<string> ans;
    
    void backtrack(string cur, string next_d){
        if(next_d.length()==0)
        {
            ans.push_back(cur);
            return;
        }
        
        int dig=next_d[0]-'0';
        next_d.erase(next_d.begin());
        string letters=hash[dig];
        
        for(int i=0; i<letters.length(); i++)
            backtrack(cur+letters[i], next_d);
    };
    
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return ans;
        
        backtrack("", digits);
        return ans;
    }
};
