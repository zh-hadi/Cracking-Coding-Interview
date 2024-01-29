// This Program
//   Time Complexity : O(n)
//   Space Complexity : O(n)

#include <iostream>
#include <vector>
using namespace std;

int findNodeIndex(vector<int>& tree, int val, int index) {
    if (index < tree.size() && tree[index] != -1) {
        if (tree[index] == val) {
            return index;
        } else if (val < tree[index]) {
            return findNodeIndex(tree, val, 2 * index + 1);
        } else {
            return findNodeIndex(tree, val, 2 * index + 2);
        }
    }
    return -1;
}

vector<int> constructSubtree(vector<int>& tree, int index) {
    vector<int> subtree;
    if (index < tree.size() && tree[index] != -1) {
        subtree.push_back(tree[index]);

        vector<int> leftSubtree = constructSubtree(tree, 2 * index + 1);
        vector<int> rightSubtree = constructSubtree(tree, 2 * index + 2);
        subtree.insert(subtree.end(), leftSubtree.begin(), leftSubtree.end());
        subtree.insert(subtree.end(), rightSubtree.begin(), rightSubtree.end());
    }
    return subtree;
}


vector<int> searchBST(vector<int>& tree, int val) {
    int index = findNodeIndex(tree, val, 0);
    if (index != -1) {
        return constructSubtree(tree, index);
    } else {
        return vector<int>();
    }
}

int main() {
    int n;
    cout << "Enter your tree array length: ";
    cin >> n;
    vector<int> tree(n);
    cout << "Put Tree value separated by space \nAnd null value put -1 \n";
    for(int i = 0; i<n; i++){
        cin >> tree[i];
    }

    int targetValue;
    cout << "Enter the value to search for in the BST: ";
    cin >> targetValue;

    vector<int> result = searchBST(tree, targetValue);

    if (!result.empty()) {
        cout << "Subtree found \n";
        cout << "Subtree value : ";
        for (int node : result) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << "Tree with value " << targetValue << " not found in the BST." << endl;
    }

    return 0;
}
