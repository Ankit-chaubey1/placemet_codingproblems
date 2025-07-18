/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* prev=nullptr;
        Node* curr=head;
        while(curr!=nullptr){
            Node* temp=curr->next;
           curr->next=prev;
           prev=curr;
            curr=temp;
        }
        return prev;
    }
};



/*
Input: head: 1 -> 2 -> 3 -> 4 -> NULL
Output: head: 4 -> 3 -> 2 -> 1 -> NULL
Explanation:
*/
