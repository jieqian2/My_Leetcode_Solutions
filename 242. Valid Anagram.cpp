
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;
        
        for(int i=0; i<s.length(); i++)
        {
            if(t.find(s[i]) == string::npos) return false;
            
            size_t pos=t.find(s[i]);
            t.erase(t.begin()+pos);
        }
        if(t.empty()) return true;
        return false;
    }
};
