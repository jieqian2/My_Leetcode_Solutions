
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        if(nums.empty()) return;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int median=(n)/2;
        int start=0;
        int end=n-1;
        if(n%2==0)
            reverse(nums.begin(), nums.begin()+median);
        else
            reverse(nums.begin(), nums.begin()+median+1); 
        
        vector<int> tmp(n,0);
        for(int i=0; i<n; i++)
        {
            tmp[i]=(i%2==0) ? nums[start++]:nums[end--];
        }
        for(int i=0; i<n; i++)
        {
            nums[i]=tmp[i];
        }
    }
};
