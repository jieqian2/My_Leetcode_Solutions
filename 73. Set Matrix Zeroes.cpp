
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==0 || n==0) return;
        
        bool row_zero=false;
        bool col_zero=false;
        
        //record the status of the row[0]&col[0], check if there is zeros
        for(int k=0; k<m; k++)
            if(matrix[k][0]==0)
                row_zero=true;
        for(int k=0; k<n; k++)
            if(matrix[0][k]==0)
                col_zero=true;
        
        //record the row and col index of the Zero
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        
        //according to the index, change the elements on the same row&col;
        //expect for the row[0]&col[0]
        for(int i=1; i<m; i++)
            for(int j=1; j<n; j++)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
                    
        if(row_zero)
            for(int k=0; k<m; k++)
                matrix[k][0]=0;
        if(col_zero)
            for(int k=0; k<n; k++)
                matrix[0][k]=0;
        
    }
};
