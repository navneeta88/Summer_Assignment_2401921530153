//Palindrome Linked List
class Solution {
public:
    ListNode* reverse(ListNode* head){
        if (head == NULL || head->next == NULL) {
        return head;  
        }
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
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
        return true;  
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverse(slow->next);
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverse(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverse(newhead);
        return true;
    }
};