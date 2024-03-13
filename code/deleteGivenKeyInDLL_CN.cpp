Node* deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == k) {
            Node* back = temp->prev;
            Node* forward = temp->next;
            if (back != NULL)
                back->next = forward;
            else
                head = forward;
            if (forward != NULL)
                forward->prev = back;
            delete temp;
            temp = forward;
        } else {
            temp = temp->next;
        }
    }
    return head;
}