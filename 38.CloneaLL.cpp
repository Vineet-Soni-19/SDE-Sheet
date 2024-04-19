class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return head;
        Node* temp=head;
        //Insert the copy nodes in between
        while(temp!=NULL){
            Node* newnode=new Node(temp->val);
            newnode->next=temp->next;
            temp->next=newnode;
            temp=temp->next->next;
        }
        temp=head;
        //Updating random pointers in copy nodes
        while(temp!=NULL){
            if(temp->random) temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        temp=head;
        Node* copyhead=head->next;
        //Updating next pointers in copy nodes and original nodes
        while(temp!=NULL){
            Node* second=temp->next->next;
            if(second) temp->next->next=second->next;
            temp->next=second;
            temp=second;
        }
        return copyhead;
    }
};