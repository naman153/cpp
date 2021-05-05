class Solution {
public:
    int result = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return 0;
        if(root){
            if(root->val<= high && root->val>= low)
                result = root->val;
            else
                result = 0;
            return result + (rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high));
        }
    return result;
    }
};
