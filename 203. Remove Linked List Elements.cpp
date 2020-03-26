
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        
        while(head->val==val)
        {
            if(head->next!=NULL)
                head=head->next;
            else
                return NULL;
        }
        
        ListNode* cur=head;
        
        while(cur!=NULL && cur->next!=NULL)
        {
            if(cur->next->val==val)
            {
                if(cur->next->next!=NULL)
                    cur->next=cur->next->next;
                else
                    cur->next=NULL;
            }else
                //这里很关键，如果连续出现两个要删除的node的情况，
                //这里必须要用 else， 表示做了前面的if，cur往后移动之后不用再移动了；
                cur=cur->next;
        }
        return head;
    }
};
