
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n+1, 1);
        vector<char> number(n);
        string ans;
        
        for(int i=1; i<=n; i++)
        {
            //factorial[i] = i!
            factorial[i]=i*factorial[i-1];
            number[i-1]=i+'0';
        }
        k--;
        for(int i=1; i<=n; i++)
        {
            int index=k/factorial[n-i];
            ans.push_back(number[index]);
            number.erase( number.begin()+index );
            k = k - index*factorial[n-i];       
        }
        return ans;
    }
};
