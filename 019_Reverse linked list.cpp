/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = NULL;
        while (head != NULL) {
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }
        return node;
    }
};

/*
Giai thích thuật toán

1. Tạo biến node = NULL
LOOP:
2. Duyệt qua danh sách liên kết
3. Tạo biến tạm temp = head->next lưu lại địa chỉ của phần tử tiếp theo
4. Đảo ngược liên kết của head->next = node
5. Cập nhật node = head
6. Cập nhật head = temp
END LOOP

return node
*/


/* Recursive solution
ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head; //Nếu head rỗng hoặc head->next rỗng thì return head
        }

        ListNode* newHead = reverseList(head->next); // Đệ quy để đảo ngược danh sách còn lại
        head->next->next = head; // Đảo ngược liên kết
        head->next = nullptr; // Đặt next của head thành nullptr để tránh vòng lặp
        return newHead; // Trả về head mới
    }

*/