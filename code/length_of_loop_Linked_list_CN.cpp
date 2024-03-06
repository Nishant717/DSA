#include <unordered_map>

int lengthOfLoop(Node *head) {
    if (head == nullptr)
        return 0;

    Node* p1 = head;
    std::unordered_map<Node*, int> mpp; 
    int length = 0;

    while (p1 != nullptr) {
        length++;
        mpp[p1] = length;
        p1 = p1->next;
        if (mpp.find(p1) != mpp.end()) {
            return length - mpp[p1] + 1; 
        }
    }
    return 0;
}