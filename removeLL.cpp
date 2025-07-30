class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head; // might be if head == val
        ListNode* curr = dummy;

        while (curr->next != NULL) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {

                curr = curr->next;
            }
        }
        return dummy->next;
    }
};

/*
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:
*/
