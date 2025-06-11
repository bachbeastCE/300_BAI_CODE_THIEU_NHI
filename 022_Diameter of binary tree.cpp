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
    // Hàm đệ quy để tính chiều cao của cây nhị phân đồng thời cập nhật đường kính lớn nhất.
    // Tham số:
    // - root: con trỏ đến nút hiện tại trong cây
    // - diameter: biến lưu trữ giá trị đường kính lớn nhất được tìm thấy đến thời điểm hiện tại (tham chiếu)
    // Trả về:
    // - chiều cao của cây tính từ nút root hiện tại
    int diameterOfBinaryTreeRecusive(TreeNode* root, int& diameter) {
        // Nếu nút hiện tại là null, trả về chiều cao 0
        if(root == NULL) return 0; 

         // Đệ quy tính chiều cao cây con bên trái và bên phải
        int left_height = diameterOfBinaryTreeRecusive(root->left, diameter);
        int right_height = diameterOfBinaryTreeRecusive(root->right, diameter);

        // Cập nhật đường kính: đường kính tại nút hiện tại là tổng chiều cao hai cây con
        // Kiểm tra xem có vượt qua giá trị lớn nhất trước đó không
        diameter = max (diameter, left_height + right_height);
        
        // Trả về chiều cao của cây tính từ nút hiện tại
        return 1 + max (left_height,right_height);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        // Khởi tạo đường kính ban đầu là 0
        int diameter = 0;
        // Gọi hàm đệ quy để duyệt toàn bộ cây và cập nhật đường kính
        diameterOfBinaryTreeRecusive (root, diameter);
        return diameter;
    }
};

