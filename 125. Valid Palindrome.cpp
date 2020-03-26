
class Solution {
public:
    bool isPalindrome(string s) {
        //http://www.cplusplus.com/reference/cctype/isalnum/
        // isalnum()
        //http://www.cplusplus.com/reference/cctype/tolower/
        //tolower()
        
        //双指针，一个从左到右，一个从右到左，直到相交
        int le=0;
        int ri=s.size()-1;
        
        while(le<ri)
        {
            while( !isalnum(s[le]) && le<ri ) le++;
            while( !isalnum(s[ri]) && le<ri ) ri--;
            
            if(tolower(s[le]) != tolower(s[ri])) return false;
            
            le++; ri--;
        }
        return true;
    }
};
