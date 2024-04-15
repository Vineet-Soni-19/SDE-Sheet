class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* first=head, *last=head, *prev=NULL;
        while(first!=NULL){
            for(int i=0; i<k; i++){
                if(last==NULL) return head;
                last=last->next;
            }
            ListNode* pnode=NULL, *cnode=first, *nnode=NULL;
            while(cnode!=last){
                nnode=cnode->next;
                cnode->next=pnode;
                pnode=cnode;
                cnode=nnode;
            }
            if(prev==NULL){
                head=pnode;
            }
            else{
                prev->next=pnode;
            }
            prev=first;
            first->next=cnode;
            first=cnode;
        }
        return head;
    }
};