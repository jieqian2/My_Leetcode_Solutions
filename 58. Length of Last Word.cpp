
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s==" ")
            return 0;
        
        if(s.length() == 0)
            return 0;
        
        while(s.back()==' ')
            s.pop_back();
        
        for(int i=s.length()-1; i>=0; i--)
        {
            
            if(s.at(i)==' ')
                return s.length()-i-1;
        }
      
        return s.length();
    }
};
