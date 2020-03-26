class Solution {
public:
    int myAtoi(string str) {
        long long ans=0;
        if(str.length()==0) return 0;
        
        const int MAX=0x7fffffff;
        const int MIN=0x80000000;
        
        while(*str.begin()==' ')
            str.erase(str.begin());

        if(*str.begin()=='-')
        {
            int i=1;
            while(*(str.begin()+i)-'0' >=0 && *(str.begin()+i)-'0' <=9)
            {
                ans=ans*10 + *(str.begin()+i)-'0';
                i++;
                if(ans*(-1) >= MAX)
                    return MAX;
                else if (ans*(-1) <= MIN)
                    return MIN;
            }
            ans=ans*(-1);
           
        }else if(*(str.begin()) == '+'){
            str.erase(str.begin());
            int i=0;
            while(*(str.begin()+i)-'0' >=0 && *(str.begin()+i)-'0' <=9)
            {
                //cout<<*(str.begin()+i)-'0';
                ans=ans*10 + *(str.begin()+i) -'0';
                i++;
                if(ans >= MAX)
                    return MAX;
                else if (ans <= MIN)
                    return MIN;
            }
        }
        else if(*(str.begin())-'0' >=0 && *(str.begin())-'0' <=9)
        {
            int i=0;
            while(*(str.begin()+i)-'0' >=0 && *(str.begin()+i)-'0' <=9 )
            {
                //cout<<*(str.begin()+i)-'0';
                ans=ans*10 + *(str.begin()+i) -'0';
                i++;
                if(ans >= MAX)
                    return MAX;
                else if (ans <= MIN)
                    return MIN;
            }
        }else
            return 0;
        
        
        return ans;
    }
};
