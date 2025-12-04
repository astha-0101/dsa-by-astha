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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        ListNode *pos = head;
        ListNode *newnode;
        int size = 0;

        // compute size
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        // if list empty or n invalid
        if (head == NULL) return NULL;
        if (n <= 0 || n > size) return head; // keep original list if n invalid

        int index = size - n; // 0-based index of node to delete from start

        // if need to delete head (index == 0)
        if (index == 0) {
            newnode = head;
            ListNode* newHead = head->next;
            delete newnode;
            return newHead;
        }

        // otherwise move pos to node previous to the node to delete
        pos = head;
        for (int i = 1; i < index; ++i) {
            pos = pos->next;
        }

        // delete the node after pos
        newnode = pos->next;
        pos->next = newnode->next;
        delete newnode;

        return head;
    }
};
