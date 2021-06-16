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
    void check(TreeNode* root, vector<int> &v){
        if(root!=NULL){
            check(root->left,v);
            v.push_back(root->val);
            check(root->right,v);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        check(root,v);
        TreeNode * r=new TreeNode(v[0]);
        TreeNode* cr=r;
        for(int i=0;i<v.size()-1;i++){
            TreeNode * rt=new TreeNode(v[i+1]);
            cr->right=rt;
            cr=rt;
        }
        return r;
    }
};
