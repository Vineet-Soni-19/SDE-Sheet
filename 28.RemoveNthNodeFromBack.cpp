class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        len=len-n+1;
        temp=head;
        ListNode *prev=NULL;
        while(len>1){
            prev=temp;
            temp=temp->next;
            len--;
        }
        if(prev==NULL) return head->next;
        prev->next=temp->next;
        return head;
    }
};