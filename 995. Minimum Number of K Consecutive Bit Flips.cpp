
class Solution {
public:
    //flipped ^ A[i] ==0 表示需要进行翻转
    //1.flipped=0 A[i]=0， A[i] 是0且没被翻转，所以需要翻转。
    //2. flipped=1 A[i]=1 A[i]是1，但是原先翻转过了，所以需要再次翻转才行。
    //从第一个位置开始考虑，依次翻转到1， 然后看最后剩下的K个里还有没有0，如果还有，就说明不行。
    int minKBitFlips(vector<int>& A, int K) {
        int n=A.size();
        int flipped=0; // 当前位置是否翻转过
        vector<int> is_flipped(n,0); //A[i]位置是否翻转过
        int ans=0;
        
        
        for(int i=0; i<n; i++)
        {
            //如果i-K的位置被flipped，因为一次要flipped K个，所以当前i位置也被flipped了
            //注意到后面翻转flipped的时候实际上是翻转了下一个i的flipped状态，
            //所以在这里，当前状态是i被翻转过了，
            
            flipped = flipped ^ is_flipped[i];
            
            if(flipped^A[i]==0)
            {
                if(i+K>n) return -1; //说明没办法翻转了
                
                flipped = flipped^1; //翻转实质上是不仅翻转了当前i，也翻转了i+1。
                ans++;
                if(i+K<n) is_flipped[i+K] = 1; //同时翻转了K个，但是由于在i处的flipped总是预先被设定为是已经flipped的。这里把i+K处记为1，再通过flipped = flipped ^ is_flipped[i]; 等指针运行到i+k时就能看出在i+K实际上没有被翻转过。
            }
                
        }
        return ans;
        
    }
};
