
class Solution {
public:
    //Algorithm
    //[1,2,3,4,5,6,7]
    //[7,6,5,4,3,2,1]
    //[5,6,7,4,3,2,1]
    //[5,6,7,1,2,3,4]
    
    vector<int> n;
    void rotate(vector<int>& nums, int k) {
        n=nums;
        k=k%n.size(); //考虑k>size的情况
        reverse(0,n.size()-1);
        reverse(0,k-1);
        reverse(k,n.size()-1);
        nums=n;
    }
    
    void reverse(int sta, int end)
    {
        while(sta<end)
        {
            int temp=n[sta];
            n[sta]=n[end];
            n[end]=temp;
            
            sta++;
            end--;
        }
    }
};
