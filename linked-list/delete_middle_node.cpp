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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode *temp=head;
     ListNode *pos = head;
        ListNode *newnode;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int mid=size/2;
    if(size==0){
        return NULL;
    }
    if(size==1){
        return NULL;
    }
    if(size==2){
        head->next=NULL;
      //  delete temp;
        return head;
    }
    for (int i = 1; i < mid; ++i) {
            pos = pos->next;
        }

        // delete the node after pos
        newnode = pos->next;
        pos->next = newnode->next;
        delete newnode;

        return head;
    }
};

        
    