int countNodes(ListNode* head) {
    int count = 0;
    ListNode* curr = head;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }

    return count;
}

