
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        
        ListNode* ans= new ListNode(0);
        ListNode* cur= ans;
        ans->next = head;
        
        while(cur->next!=NULL && cur->next->next!=NULL)
        {
            ListNode* first_node = cur->next;
            ListNode* second_node = cur->next->next;
            
            first_node->next = second_node->next;
            cur->next=second_node;
            cur->next->next=first_node;
            //swap two node a time, so skip to the next next node
            cur=cur->next->next;
        }
        return ans->next;
    }
};
