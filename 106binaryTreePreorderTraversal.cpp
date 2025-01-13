// Binary Tree Preorder Traversal

#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result;
        std::stack<TreeNode*> stack;
        TreeNode* current = root;
        
        while (current != NULL || !stack.empty()) {
            while (current != NULL) {
                result.push_back(current->val);
                stack.push(current);
                current = current->left;
            }
            current = stack.top();
            stack.pop();
            current = current->right;
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    std::vector<int> result = solution.preorderTraversal(root);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
