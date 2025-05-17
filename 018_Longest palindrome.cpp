class Solution {
public:
    int longestPalindrome(string s) {
        int letter [52] = {0};
        int longest_palindrome = 0;
        bool odd_flag = 0; // Phát hiện tồn tại 1 kí tự bị lẻ
        for(int i = 0; i <s.length();i++){
            if ( 'A' <= s[i] && s[i] <= 'Z' )letter[(s[i]-'A')]++;
            else if ( 'a' <= s[i] && s[i] <= 'z' )letter[(s[i]-'a' + 26)]++;
            else continue;
        }
        for(int i = 0; i <52;i++){
            if (letter[i] % 2 == 0) longest_palindrome+= letter[i];
            else{
                longest_palindrome += (letter[i]/2)*2;
                if (odd_flag == 0){
                    odd_flag = 1;
                    longest_palindrome++;
                }
            }
        }
        return longest_palindrome;
    }
};

/*
Giải thích thuật toán:
1. Tạo mảng letter[52] để lưu số lần xuất hiện của các kí tự
2. Duyệt từ 0 đến s.length() - 1
3. Nếu kí tự là chữ hoa thì letter[s[i]-'A']++
4. Nếu kí tự là chữ thường thì letter[s[i]-'a' + 26]++
5. Nếu kí tự không phải chữ thì bỏ qua
6. Duyệt từ 0 đến 52 của mảng letter
7. Nếu letter[i] % 2 == 0 thì longest_palindrome += letter[i]
8. Nếu letter[i] % 2 != 0 thì longest_palindrome += (letter[i]/2)*2
9.  Nếu odd_flag == 0 (cờ báo xuất hiện kí tự lẻ để chèn vào giữa chuỗi đối xứng) thì odd_flag = 1 và longest_palindrome++
10. Trả về longest_palindrome
*/