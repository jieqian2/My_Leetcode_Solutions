
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==0) return digits;
        
        for(int i=digits.size()-1; i>=0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                //notice here, just need to change it to 0;
                digits[i]=0;
            }
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};
