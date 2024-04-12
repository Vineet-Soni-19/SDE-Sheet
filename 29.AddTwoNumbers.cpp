class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *first=l1, *second=l2;
        int data=0, carry=0;
        ListNode *head=new ListNode();
        ListNode *curr=head;
        while(first!=NULL || second!=NULL){
            data=carry;
            if(first){
                data+=first->val;
                first=first->next;
            }
            if(second){
                data+=second->val;
                second=second->next;
            }
            carry=data/10;
            data=data%10;
            ListNode *newnode=new ListNode(data);
            curr->next=newnode;
            curr=curr->next;
        }
        if(carry>0){
            ListNode *newnode=new ListNode(carry);
            curr->next=newnode;
        }
        return head->next;
    }
};