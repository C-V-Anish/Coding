void InsertAtEnd(Node** head,int a)
{
    Node* n=new Node();
    n->data=a;
    n->next=NULL;
    if(*head==NULL)
    {
        *head=n;
        return;
    }
    Node* temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return;
}