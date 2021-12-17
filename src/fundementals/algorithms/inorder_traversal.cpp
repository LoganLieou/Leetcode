#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

vector<int> inorderTraversal(TreeNode* tree) {
	// treat vector as a stack because you can
	vector<TreeNode*> stack;
	vector<int> v;

	// traversal algorithm
	while (stack.size() > 0 || tree != nullptr) {
		if (tree != nullptr) {
			stack.push_back(tree);
			tree = tree->left;
		} 
		else {
			if (stack.size() > 0) {
				tree = stack.back();
				stack.pop_back();
				v.push_back(tree->val);
				tree = tree->right;
			}
		}
	}

	return v;
}

template<typename T>
void outVec(vector<T> arr) {
	cout << "[ ";
	for (T a : arr) {
		cout << a << " ";
	}
	cout << "]" << endl;
}

int main() {
	// construct the tree
	TreeNode* t = new TreeNode(13);
	t->left = new TreeNode(12);
	t->right = new TreeNode(14);

	// traverse the tree
	vector<int> vals = inorderTraversal(t);
	outVec(vals);
}
