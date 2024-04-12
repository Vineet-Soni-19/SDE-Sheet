class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp=node;
        while(temp->next!=NULL){
            int data=temp->next->val;
            temp->val=data;
            if(temp->next->next==NULL){
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
    }
};