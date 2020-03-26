class Solution {
public:
    bool isHappy(int n) {
        if(n==0) return false;
        if(n==1) return true;
        
        unordered_set<int> hash;
        //use hashtable to store the sum,
        //if we find the same sum, then we find a loop, so it's not happy
        while(n!=1)
        {
            int sum=0;
            int cur=n;
            while(cur!=0)
            {
                sum += pow(cur%10, 2);
                cur = cur/10;
            }
            if(hash.count(sum)!=0)
                return false;
            else
                hash.emplace(sum);
            n=sum;
            //sum 是下一个n；
        }
        return true;
    }
};
