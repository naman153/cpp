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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int count=0;
        queue<TreeNode*> temp;
        temp.push(root);
        while(!temp.empty()){
            root=temp.front();
            temp.pop();
            if(root->left){ 
                if(root->left->left == NULL && root->left->right == NULL){
                    count+= root->left->val;
                }
                else{
                    temp.push(root->left);
                }
            }
            if(root->right){
                temp.push(root->right);
            }
                
        }
        return count;
    }
};
