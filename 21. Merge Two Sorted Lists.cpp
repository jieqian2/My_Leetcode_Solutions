
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        //一定要注意ans在这里只表示current节点，要另起一个最终的链表节点。
        ListNode* ans=res;
        
        while( l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                ans->next = new ListNode(l1->val);
                l1=l1->next;
                ans=ans->next;
            }
            else if(l1->val == l2->val)
            {
                ans->next = new ListNode(l1->val);
                l1=l1->next;
                ans=ans->next;
                ans->next = new ListNode(l2->val);
                l2=l2->next;
                ans=ans->next;
            }
            else
            {
                ans->next = new ListNode(l2->val);
                l2=l2->next;
                ans=ans->next;
            }
        }
        if(l1==NULL)
            ans->next = l2;
        if(l2==NULL)
            ans->next = l1;
        
        return res->next;
    }
};
