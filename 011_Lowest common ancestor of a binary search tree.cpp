/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {    
        //RECURSIVE:
        if (root == p || root == q || root == NULL )  return root;
        
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        else if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else
            return root;

        //LOOP:
        // int q_val= q->val;
        // int p_val= p->val;
        // int r_val= root->val;

        // while(root){
        //     if( p_val>r_val && q_val>r_val){
        //         root=root->right;
        //         r_val= root->val;
        //     }
        //     else if ( p_val<r_val && q_val<r_val){
        //         root=root->left;
        //         r_val= root->val;
        //     }
        //     else 
        //         return root;
        // }       
        // return NULL;
    }
};
/*
Nếu p, q cùng bé hơn root gọi đệ quy nhánh trái
Nếu p, q cùng lớn hơn root gọi đệ quy nhánh nhánh phải
Còn lại return root;
*/