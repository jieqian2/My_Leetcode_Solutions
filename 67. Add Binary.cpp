
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        //ans.push_back( (char) 2+'0' ); 把char转换成int
      
        int x=a.length()-1;
        int y=b.length()-1;
        int r=0;
        
        while( x>=0 || y>=0 )
        {
            int sum=r; //余数
            if(x>=0)
            {
                sum += (a.at(x)-'0');
                x--;
            }
            if(y>=0)
            {
                sum += (b.at(y)-'0');
                y--;
            }
            ans.insert(ans.begin(), char(sum%2+'0'));
            //ans.push_back(char(sum%2));
            r = sum/2;
        }
        if(r!=0)
        {
            ans.insert(ans.begin(), char(r+'0'));
            //ans.push_back(r);
        }
        
        return ans;
        
    }
};
