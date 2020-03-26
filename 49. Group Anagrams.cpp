
 
class Solution {
public:
    string str_sort(string s){
        string ss=s;
        sort(ss.begin(), ss.end());
        return ss;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;
        
        map<string, int> mymap;
        int index=0;
        for(int i=0; i<n; i++)
        {
            string tmp = str_sort(strs[i]);
            if(mymap.count(tmp)==0)
            {
                mymap.emplace(tmp, index);
                ans.resize(index+1);
                
                vector<string> temp;
                temp.push_back(strs[i]);
                ans[index]=temp;
                index++;
            }
            else
            {
                int id=mymap[tmp];
                ans[id].push_back(strs[i]);
            }  
        }
        return ans; 
    }
};
