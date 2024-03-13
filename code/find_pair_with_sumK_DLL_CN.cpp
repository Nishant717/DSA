/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node *head, int k)
{
    // Write your code here. ans.emplace_back(left->data,right->data);
    vector<pair<int, int>> ans;

    Node *temp = head;

    while (temp->next)

    {

        temp = temp->next;
    }

    Node *left = head;

    Node *right = temp;

    while (left->data < right->data)

    {

        int temp = left->data + right->data;

        if (temp == k)

        {

            ans.emplace_back(left->data, right->data);

            left = left->next;

            right = right->prev;
        }

        else if (temp > k)

        {

            right = right->prev;
        }

        else

        {

            left = left->next;
        }
    }

    return ans;
}
