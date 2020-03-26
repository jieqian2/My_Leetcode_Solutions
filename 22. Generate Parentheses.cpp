
class Solution {
public:
    vector<string> ans;
    //left: 剩余的左括号数量； right:剩余的右括号数量
    void backtrack(int left, int right, string cur)
    {
        if(right==0) ans.push_back(cur);
        
        if(left>0) backtrack(left-1, right, cur+"(" );
        if(left<right) backtrack(left, right-1, cur+")");
        
    }
    
    vector<string> generateParenthesis(int n) { 
        if(n==0) return ans;
        backtrack(n, n, "");
        return ans;    
    }
};
