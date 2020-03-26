
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        
        ListNode* ans = new ListNode(head->val);
        ListNode* cur = ans;
        
        
        while(head!=NULL)
        {
            if(head->val != cur->val)
            {
                cur->next = new ListNode(head->val);
                cur=cur->next;
            }
            head=head->next;
        }
        return ans;
    }
};
