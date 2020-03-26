class Solution {
public:
    //双指针: https://www.youtube.com/watch?v=3IETreEybaA
    //用hashtable来储存独一无二的字母
    //记录max；
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        
        int i=0;
        int j=0;
        int maxsub=0;
        unordered_set<char> hash;
        
        while(j<s.length()){
            if(hash.count(s[j]) == 0){
                hash.emplace(s[j]);
                j++;
                int sz=hash.size();
                maxsub=max(sz, maxsub);
     
            }
            else{
                //注意这里不对了，hashset是没有顺序的，即使按顺序添加，也不能直接删掉第一个
                //hash.erase(hash.begin());
                hash.erase(s[i]);
                i++;
            }
        }
        return maxsub;
    }
};
