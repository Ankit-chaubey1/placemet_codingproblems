class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        /*  ListNode* curr = head;
          ListNode* dummy = new ListNode(0);
          ListNode* ptr = dummy;
          while (curr != NULL) {
              if ( curr->next==NULL || curr->val != curr->next->val) {
                  ptr->next = new ListNode(curr->val);
                  ptr=ptr->next;
                  }
              curr=curr->next;

          }
          return dummy->next;
      }*/
      // second approach

ListNode* curr = head;
…while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
…};

