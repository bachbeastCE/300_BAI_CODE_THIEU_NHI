/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
    if (!head || !head->next)
        return false;

    struct ListNode *slow = head;
    struct ListNode *fast = head->next;
    while (slow != fast)
    {
        if (!fast || !fast->next)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}

/*
Giải thích thuật toán
1. Nếu head là null hoặc head->next là null thì ra về false

2. Tạo con trỏ slow và fast

3. Nếu 2 con trỏ chưa gặp nhau
    Nếu fast là null fast next là null -> return false
    con trỏ slow dịch 1
    con trỏ false dịch 2

4. Nếu 2 con trỏ gặp nhau được (slow = fast) thì tức là có vòng lặp, return true.

Efficient Version Using Floyd's Cycle Detection Algorithm
*/