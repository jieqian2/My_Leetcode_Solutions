713. Subarray Product Less Than K
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(nums.empty()) return 0;
        if(k<=nums[0]) return 0;
        
        //slice window
        int start=0;
        int product=1;
        int res=0;
        
        for(int end=0; end<nums.size(); end++)
        {
            product *= nums[end];
            
            while(product>=k){
                product /= nums[start];
                start++;
                if(start>end) break;
            }
           
            res += end-start+1; 
        }
        return res;
    }
};
