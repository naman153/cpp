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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans={};
        if(!root)
            return ans;
        TreeNode* prev=NULL;
        stack<TreeNode*> temp;
        do{
            while(root!=NULL){
                temp.push(root);
                root=root->left;
            }
            while(root==NULL && !temp.empty()){
                root=temp.top();
                if(root->right==NULL || root->right==prev){
                    ans.push_back(root->val);
                    temp.pop();
                    prev=root;
                    root=NULL;
                }
                else{
                    root=root->right;
                }
            }
        }while(!temp.empty());

        return ans;
    }
};
