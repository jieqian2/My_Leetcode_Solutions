20. Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0)
            return true;
        
        stack<char> st;
        
        for(int i=0; i<s.length(); i++)
        {
            //这里操作很骚
            if(s.at(i) == '(')
                st.push(')');
            else if (s.at(i) == '{')
                st.push('}');
            else if (s.at(i) == '[')
                st.push(']');
            else if(st.empty())
                st.push(s.at(i));//如果是空栈的话直接读进来
            else
            {
                if(st.top()==s.at(i))
                    st.pop();
                else
                    st.push(s.at(i));
            }
            /*else
            {
                if(st.empty() || st.top() != s.at(i))
                    return false;
                else
                    st.pop();
            }*/
        }
        return st.empty();
    }
};
