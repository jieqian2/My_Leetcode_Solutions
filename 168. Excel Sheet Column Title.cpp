
class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        
        while(n>0)
        {
            if(n%26!=0)
            {
                ans.insert(ans.begin(),char(n%26 -1 +'A'));
                n=n/26;
            }
            else
            {
                ans.insert(ans.begin(),'Z');
                n=n/26-1;
            }
        }
        return ans;
        
    }
};
