
class Solution {
public:
    //解法一：双指针： slow指针一次走一个，fast指针一次走两个
    //如果两个指针碰到了，说明有loop；如果slow走到NULL了 就说明没有loop；
    
    //解法2，Map
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        
        map<ListNode*, int> mp;
        
        while(head!=NULL)
        {
            if(mp.count(head)==0)
                mp.emplace(head, 1);
            else
                return true;
            head=head->next;
        }
        return false;
    }
};
