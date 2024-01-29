// This Program
//   Time Complexity : O(n)
//   Space Complexity : O(1)

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int height(vector<int>& tree) {
    int n = tree.size();
    if (n == 0) {
        return 0;
    }

    int height = 0;
    int currentLevelSize = 1;
    int index = 0;

    while (index < n) {
        for (int i = 0; i < currentLevelSize; ++i) {
            if (tree[index] != -1) {
                index = 2 * index + 1;
            } else {
                index++;
            }
        }
        height++;
        currentLevelSize *= 2;
    }

    return height;
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


    int treeHeight = height(tree);

    cout << "Height of the binary tree: " << treeHeight << endl;

    return 0;
}
