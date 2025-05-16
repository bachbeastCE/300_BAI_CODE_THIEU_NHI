class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letter[26] = {0};
        for (int i = 0; i < max(magazine.length(), ransomNote.length()); i++) {
            if (i < magazine.length()) {
                letter[magazine[i] - 97]++;
            }
            if (i < ransomNote.length()) {
                letter[ransomNote[i] - 97]--;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (letter[i] < 0)
                return false;
        }
        return true;
    }
};

/*
Giải thích:
1. Tạo mảng letter có 26 phần tử để lưu số lượng chữ cái
   trong chuỗi magazine và ransomNote
   letter[0] = a, letter[1] = b, letter[2] = c, ...
   letter[25] = z
2. Duyệt qua các kí tự ỏ 2 chuỗi
3. Cộng số lượng chữ cái khi duyệt qua mảng magazine
4. Trừ số lượng chữ cái khi duyệt qua mảng ransomNote
5. Check lại mảng letter , nếu có số lượng chứ cái nào bị âm thì số lượng chữ trong magazine không đủ để tạo nên ransomnote-> return false
6. return true
*/


/*
// Tìm có chuỗi ransomNote có nằm trong chuỗi magazine hay không
bool isNestSubtring(string ransomNote, string magazine) {
    for (int i = 0; i < magazine.length() - ransomNote.length(); i++) {
        if (ransomNote[0] == magazine[i]) {
            string sub = magazine.substr(i, ransomNote.length());
            if (ransomNote == sub)
                return true;
        }
    }
    return false;
}
1. lấy ra chữ cái đầu của ransomNote và só lượng chữ cái
2. Duyệt qua các kí tự magazine
3. Nếu chữ cái đầu trùng thì thực hiện cắt chuỗi con magazine -> đem so
sánh với chuỗi ransomNote nếu có trả true,
4. Duyệt hết không tìm thấy return false
*/