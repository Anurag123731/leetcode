class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        ListNode* f = head;
        while(f != NULL && f->next != NULL){
            swap(f->val, f->next->val);
            f = f->next->next;
        }
    return head;
    }
};