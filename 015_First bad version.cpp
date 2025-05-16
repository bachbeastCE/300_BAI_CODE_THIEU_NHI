// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion_recursive(int left, int right) {
        if (left < right) {
            int mid = left + (right -left) / 2;
            if (isBadVersion(mid) == false)
                return firstBadVersion_recursive(mid + 1, right);
            else {
                if (mid - 1 == 0)
                    return 1;
                else if (isBadVersion(mid - 1) == false)
                    return mid;
                else
                    return firstBadVersion_recursive(left, mid - 1);
            }
        } else {
            return right;
        }
    }

    int firstBadVersion(int n) { 
        return firstBadVersion_recursive(1, n); 
    }
}; 
/*
DÙNG ĐỆ QUY VÀ BINARY SEARCH ĐỂ TÌM PHIÊN BẢN ĐẦU TIÊN LỖI
 */