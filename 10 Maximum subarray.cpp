class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sum = std::max(sum + nums[i], nums[i]);
            max = std::max(sum, max);
        }
        return max;
    }
};

/*
Giải thích từng bước của thuật toán: Kadane's Algorithm
Khởi tạo giá trị ban đầu:
+max lưu tổng lớn nhất của dãy con tìm thấy. Ban đầu, nó được gán bằng nums[0].
+sum lưu tổng hiện tại của dãy con đang xét. Nó cũng bắt đầu từ nums[0].

Duyệt qua mảng từ phần tử thứ hai:
Duyệt từ i = 1 đến hết mảng, mỗi lần xét một phần tử nums[i].
sum = std::max(sum + nums[i], nums[i]); Điều này có nghĩa là:
    Nếu sum + nums[i] lớn hơn nums[i], thì tiếp tục cộng giá trị vào dãy con hiện tại.
    Nếu nums[i] lớn hơn, thì bắt đầu một dãy con mới từ nums[i].
max = std::max(sum, max); Cập nhật max nếu sum hiện tại lớn hơn giá trị lớn nhất đã tìm thấy trước đó.

Trả về kết quả: Sau khi duyệt hết mảng, max sẽ lưu tổng lớn nhất của một dãy con liên tiếp.
*/