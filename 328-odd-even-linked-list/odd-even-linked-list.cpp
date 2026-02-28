class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode *odd=head;
        ListNode *eve=head->next;
        ListNode *temp=head->next;
        
        while(odd->next!=NULL && eve->next!=NULL){
            odd->next=eve->next;
            odd=odd->next;
            eve->next=odd->next;
            eve=eve->next;
        }
        odd->next=temp;
        return head;
    }
};