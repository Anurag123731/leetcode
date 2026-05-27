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
    ListNode* reverseList(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* Next = NULL;

    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode* c=new ListNode(0);
        c->next=head;
        ListNode* temp=c;
        ListNode* a=NULL;
        ListNode* r=NULL;
        int n=0;
        while(n<=right){
            if(n==left-1)  a=temp;
            if(n==right)  r=temp;
            temp=temp->next; 
            n++;
        }
        ListNode* l=a->next;
        ListNode* b=r->next;
        a->next=NULL;
        r->next=NULL;
        r=reverseList(l);
        a->next=r;
        l->next=b;
        return c->next;

    }
};