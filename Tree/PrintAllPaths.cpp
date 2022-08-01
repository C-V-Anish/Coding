#include <iostream>
#include <vector>
using namespace std;

class Node
{
    public:

	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = this->right = nullptr;
	}
};


bool isLeaf(Node* node) {
	return (node->left == nullptr && node->right == nullptr);
}

void printRootToLeafPaths(Node* node, vector<int> &path)
{
	if (node == nullptr) {
		return;
	}


	path.push_back(node->data);

	if (isLeaf(node))
	{
		for (int data: path) {
			cout << data << " ";
		}
		cout << endl;
	}

	printRootToLeafPaths(node->left, path);
	printRootToLeafPaths(node->right, path);

	path.pop_back();
}


void printRootToLeafPaths(Node* node)
{

	vector<int> path;
    printRootToLeafPaths(node, path);
}

int main()
{
	/* Construct the following tree
			  1
			/   \
		   /     \
		  2       3
		 / \     / \
		4   5   6   7
			   /     \
			  8       9
	*/

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->right->left->left = new Node(8);
	root->right->right->right = new Node(9);

	printRootToLeafPaths(root);

	return 0;
}