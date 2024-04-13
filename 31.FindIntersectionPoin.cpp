class Solution {
    int lengthOfList(ListNode *head){
        int len=0;
        while(head!=NULL){
            head=head->next;
            len++;
        }
        return len;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=lengthOfList(headA);
        int lenB=lengthOfList(headB);
        int x=abs(lenA-lenB);
        while(lenA!=lenB){
            if(lenA>lenB){
                headA=headA->next;
                lenA--;
            }
            else{
                headB=headB->next;
                lenB--;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};