#include <iostream>
using namespace std;
class Node
{
    public:
    int key;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* temp = new Node();
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
}
void preorder(Node* root)
{
        if (root != NULL)
        {
            cout<<(root->key)<<" ";
            preorder(root->left);
            preorder(root->right);
        }
}
void inorder(Node* root)
{
        if (root != NULL)
        {
            inorder(root->left);
            cout<<(root->key)<<" ";
            inorder(root->right);
        }
}
void postorder(Node* root)
{
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout<<(root->key)<<" ";
        }
}
int main()
{
    Node* root = newNode(10);
    root->left = newNode(20);
    root->left->left = newNode(30);
    root->left->right = newNode(40);
    root->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    int ch;
    cout<<"Press:-\n1 for Pre-Order Traversal\n2 for In-Order Traversal\n3 for Post-Order Traversal\n";
    cin>>ch;
    switch(ch)
    {
        case 1 : preorder(root);
                 break;
        case 2 : inorder(root);
                 break;
        case 3 : postorder(root);
                 break;
        default : cout<<"Invalid Choice";
    }
}