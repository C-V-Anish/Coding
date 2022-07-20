#include <iostream>
#include <vector>
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
void PrintVec(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void PrintAllPaths(Node* root,vector<int>& b,int c)
{
    if(root==NULL)
    return;
    b[c]=root->key;
    c++;
    if(root->left==NULL && root->right==NULL)
    PrintVec(b);
    else
    {
        PrintAllPaths(root->left,b,c);
        PrintAllPaths(root->right,b,c);
    }
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
    vector<int> a;
    PrintAllPaths(root,a,0);
}