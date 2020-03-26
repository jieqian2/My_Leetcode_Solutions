class Solution {
public:
    //two pointers
    //缩小范围，高度较低的那根向前移动，因为向前移动有可能会遇到更高的，抵消j-i变小的因素
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxwater=0;
        
        while(i<j)
        {
            //cout<<(j-i)*min(height[i],height[j])<<endl;
            maxwater=max(maxwater, (j-i)*min(height[i],height[j]) );    
            if(height[i]>=height[j])
                j--;
            else
                i++;
        }
        return maxwater;
    }
};
