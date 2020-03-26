
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> ans;
        unordered_set<int>  hash;
        
        for(int i : nums1){
            hash.emplace(i);
        }
        unordered_set<int>  intersec;
        for(int i : nums2){
            if(hash.count(i)!=0)
                intersec.emplace(i);
        }
        
        for(auto i : intersec){
            if(intersec.count(i)==1)
                ans.push_back(i);
        }
        
        return ans;
    }
};
