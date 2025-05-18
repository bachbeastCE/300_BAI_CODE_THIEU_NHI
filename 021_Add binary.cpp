class Solution {
public:
    // Hàm cộng 2 chuỗi nhị phân đã tối ưu
    string addBinary(string a, string b) {
        //Tạo biến carry để lưu trữ giá trị carry 
        string ans;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        //Duyệt từ cuối chuỗi a và b
        while (i >= 0 || j >= 0 || carry) {
        if (i >= 0) // Nếu i >= 0 thì carry cộng giá trị của a[i]
            carry += a[i--] - '0';
        if (j >= 0) // Nếu j >= 0 thì carry cộng giá trị của b[j]
            carry += b[j--] - '0';
        ans += carry % 2 + '0'; // Thêm giá trị carry vào chuỗi ans, chia lấy dư 2
        carry /= 2; // Chia carry cho 2 để lấy giá trị carry mới
        }

        reverse(begin(ans), end(ans)); // Đảo ngược chuỗi ans
        return ans;
    }
};

/*
Thuật toán của cách giải cơ bản:
class Solution {
public:
    string addBinary(string a, string b) {
        //Đồng bộ độ dài của 2 chuỗi a và b
        int max_length = a.length();
        if (a.length() > b.length()) {
            string tmp = "";
            for (int i = 0; i < (a.length() - b.length()); i++)
                tmp = tmp + '0';
            b = tmp + b;
        }
        if (b.length() > a.length()) {
            max_length = b.length();
            string tmp = "";
            for (int i = 0; i < (b.length() - a.length()); i++)
                tmp = tmp + '0';
            a = tmp + a;
        }
        //Tạo biến carry để lưu trữ giá trị carry
        string result = "";
        bool carry = false;
        for (int i = max_length - 1; i >= 0; i--) {
            if ((a[i] + b[i] - '0') == '0') {
                if (!carry)
                    result = '0' + result; // 0 + 0 = 0
                else {
                    carry = false;
                    result = '1' + result; // 0 + 0 + 1 = 1
                }
            } else if ((a[i] + b[i] - '0') == '1') {
                if (!carry)
                    result = '1' + result; // 1 + 0 = 1
                else {
                    result = '0' + result; // 1 + 0 + 1 = 0  carry 1
                    carry = true;
                }
            } else {
                if (!carry) {
                    result = '0' + result; // 1 + 1 = 0  carry 1
                    carry = true;
                } else {
                    result = '1' + result; // 1 + 1 + 1 = 1  carry 1
                    carry = true;
                }

            } // 1 + 1 = 0  carry 1
        }
        if (carry)
            result = '1' + result; // Nếu còn carry thì thêm 1 vào đầu chuỗi
        return result;
    }
};
*/