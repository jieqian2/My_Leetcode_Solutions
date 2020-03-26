class Solution {
public:
    //DP
    //要判断s[i][j] 只要判断s[i+1][j-1]是否true 以及si==sj？
    //比如s=abbaba要判断s2-5‘baba’， 只要先判断s3-4 ‘ab’是否一样，以及s2和s5是否一样
    //储存已经判断好的结果
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0) return s;
        
        int maxlength=1;
        int a,b=0;
        bool dp[n][n]={false};
        //初始条件1
        for(int i=0; i<n; i++)
           dp[i][i]=true;
        
        //初始条件2
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                maxlength=2;
                a=i;b=i+1;
            }
            else
                dp[i][i+1]=false;
        }
        
        //注意这里的是错误的，判断顺序有问题
        //应该先依次判断（i，i+2）
        //在判断（i，i+3）。。。。
        
        /*for(int i=0; i<n; i++)
            for(int j=i+2; j<n; j++)
            {
                if(dp[i+1][j-1] && s[i]==s[j])
                {
                    dp[i][j]=true;
                    if((j-i+1) > maxlength)
                    {
                        maxlength=(j-i+1);
                        a=i;b=j;
                    }
                    
                }
                
            }*/
        
        for(int k=2; k<n; k++)
            for(int i=0; i+k<n; i++)
            {
                int j=i+k;
                if(dp[i+1][j-1] && s[i]==s[j])
                {
                    dp[i][j]=true;
                    if((j-i+1) > maxlength)
                    {
                        maxlength=(j-i+1);
                        a=i;b=j;
                    }
                    
                }
                
            }
        
        string ans;
        if(maxlength==1)
        {
            ans.push_back(s[0]);
            return ans;
        }
        
        for(int i=a; i<=b; i++ )
            ans.push_back(s[i]);
        return ans;
        
    }
};
