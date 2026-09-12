class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != NULL) {
            arr.push_back(temp1->val);
            temp1 = temp1->next;
        }

        while(temp2 != NULL) {
            arr.push_back(temp2->val);
            temp2 = temp2->next;
        }

        sort(arr.begin(), arr.end());

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for(int i = 0; i < arr.size(); i++) {
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }

        return dummy->next;
    }
};