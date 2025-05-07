// Check Whether Two Trees are Same



#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


bool isSameTree(TreeNode* p, TreeNode* q) {
    // Both nodes are null
    if (p == nullptr && q == nullptr) return true;

  
    if (p == nullptr || q == nullptr || p->val != q->val) return false;

   
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

// Example usage
int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    if (isSameTree(root1, root2)) {
        cout << "Trees are the same." << endl;
    } else {
        cout << "Trees are different." << endl;
    }

    return 0;
}
