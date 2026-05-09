class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Result list ka head
        ListNode* curr = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0){
            int sum = carry;
            
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10; // 15 ka carry 1
            curr->next = new ListNode(sum % 10); // 15 ka 5 rakh
            curr = curr->next;
        }
        
        return dummy->next;
    }
};
