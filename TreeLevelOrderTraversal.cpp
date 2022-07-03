#include <iostream>
#include <queue>
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
    Node* n = new Node();
    n->key=data;
    n->left=n->right=NULL;
    return n; 
}
void levelOrderTraversal(Node* root)
{
    if(root==NULL)
    cout<<"Zero Element Tree";
    else
    {
        queue<Node*> a;
        a.push(root);
        while(a.empty()==false)
        {
            Node* p = a.front();
            a.pop();
            cout<<(p->key)<<" ";
            if(p->left != NULL)
            a.push(p->left);
            if(p->right != NULL)
            a.push(p->right);
        }
    }
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->right->right = newNode(9);
    root->right->left->left = newNode(10);
    root->right->right->right = newNode(11);
    levelOrderTraversal(root);
}