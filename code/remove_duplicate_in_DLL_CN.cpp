Node *removeDuplicates(Node *head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head->next;  // Start from the second node

    while (temp != NULL) {
        if (temp->prev->data == temp->data) {
            Node *nextNode = temp->next;
            temp->prev->next = nextNode;
            if (nextNode != NULL)
                nextNode->prev = temp->prev;
            free(temp);
            temp = nextNode;
        } else {
            temp = temp->next;
        }
    }
    return head;
}