
//暴力搜索格式：

class Solution {
public:
    vector<vector<char>> a;
    vector<vector<bool>> use;
    //暴力搜索格式：
    const int wx[4]={0,0,-1,1};
    const int wy[4]={1,-1,0,0};
    
    bool visit(int i, int j, int step, string& word)
    {
        //别忘了先写递归终止条件；
        if(step == word.length())
            return true;
        int x=i;
        int y=j;
        int n=use.size();
        int m=use[0].size();
        
        use[x][y]=false;
        
        for(int u=0; u<4; u++)
        {
            int xx= x+wx[u];
            int yy= y+wy[u];
            if(xx>=0 && xx<n && yy>=0 && yy<m && use[xx][yy] && a[xx][yy]==word[step])
                if( visit(xx,yy,step+1,word) ) 
                    return true;
        }
        
        use[x][y]=true;
        return false;       
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        a=board;
        int n=a.size();
        int m=a[0].size();
        if( n==0 || m==0 ) return false;
        if( word.length() ==0 ) return true;
        
        use.resize(n, vector<bool>(m,true));
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(a[i][j]==word[0])
                    if( visit(i,j,1,word) ) 
                        return true;
        return false;
        
    }
};
