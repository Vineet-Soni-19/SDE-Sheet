class Solution {
    ListNode* insertAtHead(ListNode* head, int data){
        ListNode* newnode=new ListNode(data,head);
        return newnode;
    }
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *first=l1, *second=l2;
        int data=0, carry=0;
        ListNode *head=NULL;
        while(first!=NULL && second!=NULL){
            data=first->val+second->val+carry;
            carry=data/10;
            data=data%10;
            head=insertAtHead(head,data);
            first=first->next;
            second=second->next;
        }
        while(first!=NULL){
            data=first->val+carry;
            carry=data/10;
            data=data%10;
            head=insertAtHead(head,data);
            first=first->next;
        }
        while(second!=NULL){
            data=second->val+carry;
            carry=data/10;
            data=data%10;
            head=insertAtHead(head,data);
            second=second->next;
        }
        if(carry>0){
            head=insertAtHead(head,carry);
        }
        head=reverseList(head);
        return head;
    }
};