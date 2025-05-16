class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int prev1 = 1, prev2 = 2;

        for (int i = 3; i <= n; i++) {
            int current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }

        return prev2;
    }
};
/*
Giải thích thuật toán: Giải bài toán bằng quy hoạch động 
Độ phức tạp O(n)

1. Nếu n <= 2 thì trả về n
2. Tạo biến prev1, prev2 để lưu số cách đi lên bậc thang
3. prev1 là số cách đi lên bậc thang thứ i-2
4. prev2 là số cách đi lên bậc thang thứ i-1
5. Tạo biến current để lưu số cách đi lên bậc thang thứ i
6. Duyệt từ 3 đến n
7. current = prev1 + prev2
8. prev1 = prev2
9. prev2 = current
10. Trả về prev2
*/


/*
Trường hợp dùng đệ quy
Đô phức tạp O(2^n)

 void climbStairs_recursive(int n, int start, int& way) {
        if (start == n) {
            way++;
            return;
        }
        if (start > n)
            return;

        climbStairs_recursive(n, start + 1, way);
        climbStairs_recursive(n, start + 2, way);
    }

    int climbStairs(int n) {
        int way = 0;
        climbStairs_recursive(n, 0, way);
        return way;
    }
*/