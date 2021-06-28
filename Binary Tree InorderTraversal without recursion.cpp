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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> temp;
        while(1){
            while(root){
                temp.push(root);
                root=root->left;
            }
            if(temp.empty())
                break;
            root = temp.top();
            temp.pop();
            ans.push_back(root->val);
            root=root->right;
        }
        return ans;
    }
};
