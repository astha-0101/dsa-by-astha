class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* ptr1;
        ListNode* ptr2;
        int n1=0,n2=0,size=0;
        while(temp!=NULL){
            n1++;
            temp=temp->next;
            
        }
        temp=headB;
        while(temp!=NULL){
            n2++;
            temp=temp->next;
        }
        if(n1>n2){
            size=n1-n2;
            ptr1=headA;
            ptr2=headB;
            
        }
        else{
            size=n2-n1;
            ptr1=headB;
            ptr2=headA;
        }
        while(size){
            ptr1=ptr1->next;
            if(ptr1==NULL){
                return NULL;
            }
            size--;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
        
    }
};