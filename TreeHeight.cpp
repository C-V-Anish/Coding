#include <iostream>
using namespace std;
class Node
{
    public:
    int key;
    Node* left;
    Node* right;
};
int height(Node* root)
{
    if(root == NULL)
    return 0;
    else
    return max(height(root->left),height(root->right))+1;
}
Node* newNode(int data)
{
    Node* temp = new Node();
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
}
int main()
{
    Node* root = newNode(10);
    root->left = newNode(20);
    root->left->left = newNode(30);
    root->left->right = newNode(40);
    root->left->right->left = newNode(50);
    root->left->right->left->right = newNode(60);
    root->right = newNode(70);
    root->right->left = newNode(80);
    root->right->right = newNode(90);
    root->right->right->left = newNode(100);
    root->right->right->right = newNode(110);
    cout<<"Height of this tree is "<<height(root);
}