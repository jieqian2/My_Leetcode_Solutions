
class Solution {
public:
    //要建立两个map 比较两次，因为比较s和t的结果不一样。
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        map<char,char> ss;
        map<char,char> tt;
        
        for(int i=0; i<s.length(); i++)
        {
            if(ss.count(s[i])!=0)
            {
                if(ss[s[i]] != t[i])
                    return false;
            }else{
                ss.emplace(s[i], t[i]);
            }
        }
        for(int i=0; i<s.length(); i++)
        {
            cout<<i;
            if(tt.count(t[i])!=0)
            {
                if(tt[t[i]] != s[i])
                    return false;
            }else{
                tt.emplace(t[i], s[i]);
            }
        }
        return true;
        
    }
};
