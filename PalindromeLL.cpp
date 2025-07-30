class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // find the middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
…            ListNode* secondhalf = reverseList(slow);
        ListNode* firsthalf = head;
        // compare value of first and second half of ll nodes
            while (secondhalf != NULL) {
            if (firsthalf->val != secondhalf->val) {
                return false;
            }
            firsthalf = firsthalf->next;
            secondhalf = secondhalf->next;
        }
        return true;
    }
    
    }
    //reverse second half of ll 
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
