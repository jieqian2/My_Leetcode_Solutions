
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        vector<int> vc;
        
        while(head!=NULL)
        {
            vc.push_back(head->val) ;
            head=head->next;
        }
        cout<<vc.size();
        int left=0;
        int right=vc.size()-1;
        while(left<right)
        {
            if(vc[left] != vc[right]) 
                return false;
            else
            {
                left++;right--;
            }
        }
        return true;
    }
};
