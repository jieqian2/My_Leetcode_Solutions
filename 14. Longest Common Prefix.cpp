class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        
        string s;
        s=strs[0];
        
        for(int i=0; i<strs.size()-1; i++)
        {
            //s.find(S),在str里找你想要的S，如果找到了，返回S在s中的起始index
            while( strs[i+1].find(s))
            {
                if(s.length()!=0)
                //删去最后一个字符；
                    s.pop_back();
                else
                    return "";
            }
        }
        return s;
    }
};
/*
    string str;
    str = "123456";
    cout << str << endl;
    delete the last char of a string
    //方法一：使用substr()
    str = str.substr(0, str.length() - 1);
    cout << str << endl;
 
    //方法二：使用erase()
    str.erase(str.end() - 1);
    cout << str << endl;
 
    //方法三：使用pop_back()
    str.pop_back();
    cout << str << endl;*/
