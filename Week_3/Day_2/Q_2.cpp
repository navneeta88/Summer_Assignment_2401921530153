//Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* fast=temp;
        ListNode* slow=temp;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL)
            return head->next;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delNode=slow->next;
        slow->next=slow->next->next;
        delete delNode;
        return head;
    }
};