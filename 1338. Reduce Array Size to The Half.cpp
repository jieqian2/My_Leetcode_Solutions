
class Solution {
public:
    int minSetSize(vector<int>& arr) { 
        unordered_map<int, int> count;
        //count the occorance of every num in arr
        for(int i=0; i<arr.size(); i++)
            count[ arr[i] ]++;
        
        vector<int> order;
        for(auto &p : count)
            order.push_back(p.second);
        sort(order.begin(), order.end(), greater<int>());
        
        int sum=0;
        //贪心，只选用出现次数最多的数字，总能找到最优解
        for(int i=0; i<arr.size(); i++)
        {
            cout<< order[i];
            sum += order[i];
            if( sum >= arr.size()/2) 
                return i+1;
        }
        return arr.size();
    }
};
