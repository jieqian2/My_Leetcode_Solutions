
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //注意这里要从后往前推，这样就不会涉及删除/插入操作
        
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        
        while(i>=0 && j>=0)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--;
            j--;
        }
        
    }
};
