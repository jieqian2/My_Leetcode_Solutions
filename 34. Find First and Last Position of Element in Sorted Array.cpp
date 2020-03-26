34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
    //binary search
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return vector<int> (2,-1);
        if(n==1 && nums[0]==target ) return vector<int> (2,0);
        
        vector<int> ans;
        int left=0;
        int right=n-1;
        
        while(left<=right)
        {
            
            int mid=left+(right-left)/2;
            cout<<mid<<endl;
            if(nums[mid]==target)
            {
                
                int newleft=mid;
                int newright=mid;
                cout<<newleft<<newright<<endl;
                while( nums[newleft]==target )
                {
                    newleft--;
                    if(newleft<0)
                        break; 
                }
                ans.push_back(newleft+1);
                
                while(nums[newright]==target )
                {
                    newright++;
                    if(newright>n-1)
                        break;
                }
                ans.push_back(newright-1);
                return ans;
            }else if(nums[mid]<target)
                left=mid+1;
            else
                right=mid-1;
        }
        
        ans.resize(2,-1);
        return ans;
        
    }
};

