#include <iostream>
using namespace std;
class StackNode
{
    public:
    int data;
    StackNode* next;
};
StackNode* new_node(int data)
{
    StackNode* a=new StackNode();
    a->data=data;
    a->next=NULL;
    return a;
}
bool isEmpty(StackNode* root)
{
    return (!root);
}
void push(StackNode** root,int data)
{
    StackNode* a=new_node(data);
    a->next=*root;
    *root=a;
    cout<<data<<" is pushed onto the stack\n";
}
int pop(StackNode** root)
{
    if(isEmpty(*root))
    return 0;
    else
    {
        *root=(*root)->next;
        int popped=(*root)->data;
        return popped;
    }
}
int peek(StackNode* root)
{
    if(isEmpty(root))
    return 0;
    else
    return root->data;
}
int main()
{
    StackNode* root=NULL;
    char ch;
    int a;
    cout<<"Do you want to Enter Elements [y/n]\n";
    fflush(stdin);
    cin>>ch;
    while(ch == 'y')
    {
        cout<<"Enter element to be inserted:\n";
        cin>>a;
        fflush(stdin);
        push(&root,a);
        cout<<"Do you want to insert more?[y/n] \n";
        fflush(stdin);
        cin>>ch;
    }
    while(!isEmpty(root))
    {
        cout<<peek(root)<<" ";
        pop(&root);
    }
}