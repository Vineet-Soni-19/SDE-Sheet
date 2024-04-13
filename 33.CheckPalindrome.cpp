class Solution {
    ListNode* reverseList(ListNode* head){
        ListNode* pnode=NULL, *cnode=head, *nnode=NULL;
        while(cnode!=NULL){
            nnode=cnode->next;
            cnode->next=pnode;
            pnode=cnode;
            cnode=nnode;
        }
        return pnode;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<slow->val;
        ListNode* temp1=head, *temp2=reverseList(slow);
        while(temp1!=slow && temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};