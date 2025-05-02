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
    void invertTree_helper(TreeNode* root){
        if(root == NULL) return;

        invertTree_helper(root->left);
        invertTree_helper(root->right);
    
        TreeNode* left_tmp = root->left;
        root->left = root->right;
        root->right = left_tmp;
    }

    TreeNode* invertTree(TreeNode* root) {
        invertTree_helper(root);
        return root;
    }
};

/*
Giải thích thuật thoán
Dùng đệ quy để thay đổi vị trí nhánh trái và nhánh phải
*/