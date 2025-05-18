#include <unordered_map>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> map; //<element, quantity>

        for (int num : nums) {
            map[num]++;
        }

        int majority = nums[0]; // Assume first element is majority
        int maxCount = 0;

        for (auto& pair : map) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
                majority = pair.first;
            }
        }

        return majority;
    }
};

/*
Giải thích thuật toán
1. Tạo một map để lưu trữ số lượng xuất hiện của từng phần tử trong mảng.
2. Duyệt qua từng phần tử trong mảng và tăng số lượng xuất hiện của nó trong map.
3. Tạo biến majority để lưu trữ phần tử chiếm ưu thế và maxCount để lưu trữ số lượng tối đa.
4. Duyệt qua map để tìm phần tử có số lượng xuất hiện lớn nhất.
    5. Nếu số lượng xuất hiện lớn hơn maxCount, cập nhật maxCount và majority.
6. Trả về phần tử chiếm ưu thế.
*/