class Solution {
public:
    bool isBalanced(TreeNode* root) {
        bool isBal = true;

        std::function<int(TreeNode*)> maxDepth = [&](TreeNode* node) -> int {
            if (!node) return 0;
            int leftSub = maxDepth(node->left);
            int rightSub = maxDepth(node->right);
            if (std::abs(leftSub - rightSub) > 1) {
                isBal = false;
            }
            return std::max(leftSub, rightSub) + 1;
        };

        maxDepth(root);
        return isBal;
    }
};