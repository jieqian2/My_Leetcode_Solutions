
class Solution {
public:
    int trans(char c)
    {
        if(c=='I')
            return 1;
        else if(c=='V')
            return 5;
        else if(c=='X')
            return 10;
        else if(c=='L')
            return 50;
        else if(c=='C')
            return 100;
        else if(c=='D')
            return 500;
        else if(c=='M')
            return 1000;
        return 0;
    }
    
    int romanToInt(string s) {
        int ans=0;
        if(s.length()==0)
            return ans;
        
        cout<<trans(s.at(0))<<endl;
        
        ans += trans(s.at(0));
        
        for(int i=1; i<s.length(); i++)
        {
            if( trans(s.at(i)) > trans(s.at(i-1))   )
                //ans 一开始加过s.at(i-1)了，要先减掉，然后再减
                ans += trans(s.at(i)) - trans(s.at(i-1)) - trans(s.at(i-1));
            else
                ans += trans(s.at(i));
        }
        
        return ans;
    }
};
