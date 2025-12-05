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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);   //  dummy head
        ListNode* newnode = dummy;           //  newnode must start at dummy

        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;

        int sum = 0, q = 0, r = 0, c = 0;

        //  must loop while ANY list still has nodes
        while(ptr1 != NULL || ptr2 != NULL){
            
            if(ptr1 == NULL && ptr2 != NULL){
                sum = ptr2->val + c;
                ptr2 = ptr2->next;
            }
            else if(ptr1 != NULL && ptr2 == NULL){
                sum = ptr1->val + c;
                ptr1 = ptr1->next;
            }
            else {
                sum = ptr1->val + ptr2->val + c;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            q = sum / 10;   // carry
            r = sum % 10;   // digit
            c = q;

            // must create new node for each digit
            newnode->next = new ListNode(r);
            newnode = newnode->next;
        }

     //   leftover carry
        if(c != 0){
            newnode->next = new ListNode(c);
        }

        return dummy->next;// return real head;
    }
};