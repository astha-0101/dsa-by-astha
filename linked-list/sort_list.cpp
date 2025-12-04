class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        vector<int> num;
        ListNode *temp=head;
        //ListNode *newnode;
        
        while(temp!=NULL){
        num.push_back(temp->val);
        temp=temp->next;
        
        }

        sort(num.begin(), num.end());
        temp=head;
        for(int i=0;i<num.size();i++){
            temp->val=num[i];
            temp=temp->next;
        }
        return head;

    }
};