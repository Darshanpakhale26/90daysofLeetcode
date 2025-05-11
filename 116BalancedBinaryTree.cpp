#include <iostream>
#include <cmath>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int checkHeight(TreeNode* root) {
    if (root == nullptr) return 0;

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1;

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1;

    if (abs(leftHeight - rightHeight) > 1) return -1;

    return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(TreeNode* root) {
    return checkHeight(root) != -1;
}

int main() {
    // Balanced Tree:
    //     1
    //    / \
    //   2   3
    //  /
    // 4

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    if (isBalanced(root)) {
        cout << "Tree is balanced." << endl;
    } else {
        cout << "Tree is not balanced." << endl;
    }

    return 0;
}
