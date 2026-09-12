class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* dummy = new ListNode(0);
        ListNode* temp3 = dummy;

        int carry = 0;

        while(temp1 != NULL || temp2 != NULL || carry != 0) {

            int sum = carry;

            if(temp1 != NULL) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if(temp2 != NULL) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            carry = sum / 10;

            temp3->next = new ListNode(sum % 10);
            temp3 = temp3->next;
        }

        return dummy->next;
    }
};