class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Edge cases
        if (head == NULL || head->next == NULL)
            return true;

        /* Step 1: Find the middle */
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        /* Step 2: Reverse second half */
        ListNode* prev = NULL;
        ListNode* curr = slow;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        /* Step 3: Compare both halves */
        ListNode* left = head;
        ListNode* right = prev;

        while (right) {
            if (left->val != right->val)
                return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};

