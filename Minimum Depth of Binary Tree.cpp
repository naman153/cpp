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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int count=1;
        queue<TreeNode*> temp;
        temp.push(root);
        temp.push(NULL);
        while(!temp.empty()){
            root=temp.front();
            temp.pop();
            if(root==NULL){
                if(!temp.empty())
                    temp.push(NULL);
                count++;
            }
            else{
                if(!(root->left) && !(root->right)){
                    break;
                }
                else{
                    if(root->left){
                        temp.push(root->left);
                    }
                    if(root->right){
                        temp.push(root->right);
                    }
                }
                
            }
        }
        return count;
    }
};
