
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //技巧：倒着算，由于下一行的空格比之前多，这样就不会破坏之前的信息
        vector<int> ans;
        int r = rowIndex;
        if(r<0) return ans;
       
        ans.push_back(1);
        if(r==0) return ans;
        
        ans.resize(r+1);
        
        for(int i=1; i<r+1; i++)
        {
            ans[0]=1;
            for(int j=i-1; j>=1; j--)
            {
                ans[j]=ans[j]+ans[j-1];
            }
            
            ans[i]=1;
        }
        return ans;
    }
};
