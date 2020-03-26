
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        
        stack<int> st;
        
        while(head!=NULL)
        {
            st.push(head->val);
            head=head->next;
        }
      
        ListNode* ans= new ListNode(0);
        ListNode* cur= ans;
        
        while(!st.empty())
        {
            cur->next= new ListNode(st.top());
            cur=cur->next;
            st.pop();
        }
        return ans->next;
        
    }
};
