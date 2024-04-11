class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pnode=NULL, *cnode=head, *nnode=NULL;
        while(cnode!=NULL){
            nnode=cnode->next;
            cnode->next=pnode;
            pnode=cnode;
            cnode=nnode;
        }
        return pnode;
    }
};