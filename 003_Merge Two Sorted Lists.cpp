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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0); // Create a dummy node to simplify handling the head.
        ListNode* curr = &dummy;

        // Traverse both lists and merge them.
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        // Attach the remaining nodes (if any).
        if (list1 != nullptr) {
            curr->next = list1;
        } else {
            curr->next = list2;
        }

        return dummy.next; // Return the merged list, skipping the dummy node.

        /* Without change the list1 and list2
        ListNode result(0);
        ListNode* curr = &result;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while (curr1 != nullptr || curr2 != nullptr) {
            ListNode* newNode = new ListNode(0);
            if (curr1 != nullptr && curr2 != nullptr) {
                if (curr1->val <= curr2->val) {
                    newNode->val = curr1->val;
                    curr1 = curr1->next;
                } else {
                    newNode->val = curr2->val;
                    curr2 = curr2->next;
                }
            } else if (curr1 == nullptr) {
                newNode->val = curr2->val;
                curr2 = curr2->next;
            } else {
                newNode->val = curr1->val;
                curr1 = curr1->next;
            }

            curr->next = newNode;
            curr = curr->next;
        }
        return result.next;
        */
    }
};