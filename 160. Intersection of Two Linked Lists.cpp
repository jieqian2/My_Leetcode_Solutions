
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        
        unordered_set<ListNode*> hash;
        while(headA!=NULL)
        {
            hash.emplace(headA);
            headA=headA->next;
        }
        
        while(headB!=NULL)
        {
            if(hash.count(headB)>0)
                return headB;
            headB=headB->next;
        }
        return NULL;
    }
};
