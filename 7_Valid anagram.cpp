class Solution {
public:
    bool isAnagram(string s, string t) {
        int aphabet[26]={};
        for(int i=0 ;i< s.length();i++){
            if(s[i]!= '/0') aphabet[s[i]-97]++; 
        }
        for(int i=0 ;i< t.length();i++){
            if(t[i]!= '/0') aphabet[t[i]-97]--; 
        }
        for(int i=0 ;i<26;i++){
            if (aphabet[i] != 0) return false;
        }
        return true;
    }
};

/*
tao mang co 26 ki tu
duyệt mảng t,tim so luong cac ki tu co trong s
duyệt mảng t, trừ số lượng các kí tự
duyệt lại mảng aphabet, các giá trị trong mảng = 0 , 2 chuỗi s, t có cùng số lượng kí tự return true
    nếu khác return false
*/