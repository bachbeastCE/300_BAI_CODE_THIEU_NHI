class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 0 || s.length() == 1)
            return true;
        int head = 0;
        int tail = s.length() - 1;

        while (1) {
            if (head >= tail)
                return true;
            if ((48 > s[head] || (57 < s[head] && s[head] < 65) ||
                 (90 < s[head] && s[head] < 97) || s[head] > 122)) {
                head++;
                continue;
            }
            if ((48 > s[tail] || (57 < s[tail] && s[tail] < 65) ||
                 (90 < s[tail] && s[tail] < 97) || s[tail] > 122)) {
                tail--;
                continue;
            }

            if ((48 <= s[tail]) && (s[tail] <= 57) ||
                (48 <= s[head]) && (s[head] <= 57)) {
                if (s[head] == s[tail]) {
                    head++;
                    tail--;
                    continue;
                } else
                    return false;
            } else {
                if ((s[head] == s[tail]) || ((s[head] + 32) == s[tail]) ||
                    (s[head] == (s[tail] + 32)) ||
                    ((s[head] + 32) == (s[tail] + 32))) {
                    head++;
                    tail--;
                    continue;
                } else
                    return false;
            }
        }
    }
};

/*
Giải thích thuật toán
Nếu chuỗi rỗng hoặc có 1 phần tử -> return true

LOOP

Nếu cuối lớn hơn đầu-> đã duyệt qua hết là phù hợp ->return true
Nếu giá trị tại đầu và đuôi không phải là kĩ tự số, chữ thường, chữ hoa -> tiến đầu, lùi đuôi
Nếu là số tại đầu hoặc đuôi thì so sánh đầu đuôi -> không giống return false
                                     -> Giống thì tiến đầu, lùi đuôi
Nếu không phải là số thì so sánh theo kiểu kí tự thường (chữ hoa thì đưa về chữ thường) 
    -> không giống return false
     -> Giống thì tiến đầu, lùi đuôi

ENDLOOP
*/