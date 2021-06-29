/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSym(TreeNode* root, TreeNode* root1){
        if(!root && !root1){
            return 1;
        }
        else if(!root || !root1){
            return 0;
        }
        else if(root->val != root1->val)
            return 0;
        return isSym(root->left, root1->right) && isSym(root->right, root1->left); 
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return 1;
        return isSym(root->left, root->right);
    }
};
