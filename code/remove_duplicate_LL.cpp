/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* p1=head;
        ListNode* p2=head->next;
        while(p2!=NULL)
        {
            if(p1->val==p2->val)
            {
                p1->next = p2->next;
                delete p2; 
                p2 = p1->next;
            }
            else
            {
                p1=p1->next;
                p2=p1->next;
            }
        }
        return head;
    }
};