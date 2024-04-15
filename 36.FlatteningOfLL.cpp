Node *mergeTwoList(Node *root1, Node *root2){
    if(root1==NULL) return root2;
    if(root2==NULL) return root1;
    Node *head=new Node(0);
    Node *temp=head;
    while(root1 && root2){
        if(root1->data<=root2->data){
            temp->bottom=root1;
            root1=root1->bottom;
        }
        else{
            temp->bottom=root2;
            root2=root2->bottom;
        }
        temp=temp->bottom;
    }
    if(root1) temp->bottom=root1;
    else if(root2) temp->bottom=root2;
    return head->bottom;
}
Node *flatten(Node *root)
{
    if(root==NULL) return NULL;
    Node *cnode=root, *nnode=root->next;
    while(nnode){
        cnode=mergeTwoList(cnode,nnode);
        nnode=nnode->next;
    }
    return root;
}