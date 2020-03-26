
bool sortcol( vector<int>& v1, vector<int>& v2) { 
        return v1[0] < v2[0]; 
    } 

class Solution {
public:
    // Driver function to sort the 2D vector 
    // on basis of a particular column 

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n<=1) return intervals;
        
        sort(intervals.begin(), intervals.end(), sortcol);
        vector<vector<int>> ans;
        
        int index=0; 
        ans.push_back(intervals[0]);
        for(int i=0; i<n-1; i++)
        {
            if(ans[index][1] < intervals[i+1][0])
            {
                ans.push_back(intervals[i+1]);
                index++;
            }
            else
                ans[index][1]= max(ans[index][1], intervals[i+1][1]); 
                //if(intervals[i][1] < intervals[i+1][1] )
                //    ans[i][1]=intervals[i+1][1];
                //esle
                //    ans[i][1]=intervals[i][1];
        }
        return ans;    
    }
};
