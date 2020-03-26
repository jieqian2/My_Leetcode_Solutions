
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream iss(str);
        vector<string> words(istream_iterator<string>{iss},
                                istream_iterator<string>());
        if(words.size() != pattern.length()) return false;
        
        
        <char, string> mp;
        unordered_map<string, char> revmp;
        for(int i=0; i<pattern.length(); i++)
        {
            if(mp.count(pattern[i])==0)
                mp.emplace(pattern[i], words[i]);
            else
                if(mp[pattern[i]] != words[i])
                    return false;  
        }
        
        for(int i=0; i<words.size(); i++)
        {
            if(revmp.count(words[i])==0)
                revmp.emplace(words[i], pattern[i]);
            else
                if(revmp[words[i]] != pattern[i])
                    return false;  
        }
        
        return true;
    }
};
