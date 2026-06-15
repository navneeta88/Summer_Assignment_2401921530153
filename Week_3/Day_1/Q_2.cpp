//Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * current=head;
        ListNode * prev=nullptr;
        ListNode* next1=head;
        while(current!=NULL){
            next1=current ->next;
            current -> next=prev;
            prev=current;
            current=next1;
        }
        return prev;
    }
};