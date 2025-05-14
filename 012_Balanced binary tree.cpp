/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <math.h>

int getTreeHeight(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + fmax(getTreeHeight(root->left),
                    getTreeHeight(root->right));
}

bool isBalanced(struct TreeNode *root)
{
    if (root == NULL)
        return true;
    int left_height = getTreeHeight(root->left);
    int right_height = getTreeHeight(root->right);

    if (abs(left_height - right_height) > 1)
        return false;

    return isBalanced(root->left) && isBalanced(root->right);
}

// Giải thích thuật toán
/*
Dùng thuật toán đệ quy để so sánh chiều cao giữa 2 nhánh trái và phải
1. Nếu root = null -> Dừng thuật toán
2. Tìm chiều cao nhất tại nhánh trái.
3. Tìm chiều cao nhất tại nhánh phải.
4. So sánh 2 chiều cao của nhánh trái và phải, nếu chênh lệch quá 1 thì return
false
5. Gọi đệ quy cho nhánh trái và nhánh phải
*/

/*
Dùng thuật toán đệ quy để tìm chiều cao tối đa của 1 cây con
1. Nếu root rỗng return 0;
2. Gọi đệ quy 1 + max (chiều cao tối đa của nhánh trái, chiều cao tối đa của
nhánh trái )
*/