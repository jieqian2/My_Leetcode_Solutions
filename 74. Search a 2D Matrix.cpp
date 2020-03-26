
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==1 && n==1 && matrix[0][0]!=target) return false;
        if(target<matrix[0][0] || target>matrix[m-1][n-1]) return false;
        
        int row_id=0;
        for(int i=0; i<m; i++)
        {
            if(matrix[i][0]==target) return true;
            if(matrix[i][0]>target) 
            {
                row_id=i-1;
                break;
            }
        }
        if(target<matrix[0][n-1]) row_id=0;
        if(target>matrix[m-1][0]) row_id=m-1;
        
        if(matrix[row_id][n-1] == target) return true;
        if(matrix[row_id][n-1] < target) return false;

        for(int j=0; j<n; j++)
        {
            if(matrix[row_id][j] == target) 
                return true;
        }
        return false;
    }
};
