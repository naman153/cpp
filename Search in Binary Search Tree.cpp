class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root != nullptr){
            if(root->val == val)
                return root;
            else if(root->val < val)
                root = root->right;
            else if(root->val > val)
                root = root->left;
        }
        return root;
    }
};


____________________________________________________________________________________________________________________________________________________


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        else if(root->val < val){
            return searchBST(root->right, val);
        }
        else if(root->val > val){
            return searchBST(root->left, val);
        }
        return NULL;
    }
};
