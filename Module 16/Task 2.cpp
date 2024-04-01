#include<bits/stdc++.h>

using namespace std;

// this program
//     time complexity O(n)
//     space complexity o(n)


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty()) return nullptr;

    queue<TreeNode*> treeQueue;
    TreeNode* root = new TreeNode(nodes[0]);
    treeQueue.push(root);

    size_t index = 1;
    while (!treeQueue.empty() && index < nodes.size()) {
        TreeNode* current = treeQueue.front();
        treeQueue.pop();

        if (nodes[index] != INT_MIN) {
            current->left = new TreeNode(nodes[index]);
            treeQueue.push(current->left);
        }
        index++;

        if (index < nodes.size() && nodes[index] != INT_MIN) {
            current->right = new TreeNode(nodes[index]);
            treeQueue.push(current->right);
        }
        index++;
    }

    return root;
}

bool isValidBSTUtil(TreeNode* root, long long minVal, long long maxVal) {
    if (!root) return true;

    if (root->val <= minVal || root->val >= maxVal) return false;

    return isValidBSTUtil(root->left, minVal, root->val) &&
           isValidBSTUtil(root->right, root->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return isValidBSTUtil(root, LLONG_MIN, LLONG_MAX);
}


int main() {
    // example 1
    //vector<int> nodes = {5, 1, 4, 0, 0, 3, 6};
    // example 2
    vector<int> nodes = {2, 1, 3};

    TreeNode* root = buildTree(nodes);


    if (isValidBST(root)) {
        cout << "Valid BST\n";
    } else {
        cout << "Not a valid BST\n";
    }

    return 0;
}
