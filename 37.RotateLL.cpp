class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int len=0;
        ListNode *temp=head;
        while(temp){
            temp=temp->next;
            len++;
        }
        k=k%len;
        if(k==0) return head;
        k=len-k-1;
        temp=head;
        while(k--){
            temp=temp->next;
        }
        ListNode *newhead=temp->next;
        temp->next=NULL;
        temp=newhead;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        return newhead;
    }
};