
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //if(numbers.size()==0) return {0};
        vector<int> ans;
        
        for(int i=0;numbers[i]<=target &&i<numbers.size(); i++)
        {
            for(int j=i+1;numbers[i]+numbers[j]<=target &&j<numbers.size(); j++)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
        return {0};
    }
};
