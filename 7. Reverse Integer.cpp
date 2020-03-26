class Solution {
public:
    int reverse(int x) {
        //为了保存一个超过int类型限制的数-》 使用long型
        long rev=0;
        while(x!=0){
            rev = rev*10 + x%10;
            x /= 10;
            //注意超范围的问题，int类型的限制
            if(rev< -pow(2,31) || rev> pow(2,31)-1)
                return 0;
        }
        return rev;
        
    }
};
