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
    bool isPalindrome(ListNode* head) {
      vector<int>x;
      ListNode* p1=head;
      while(p1!=NULL)
      {
          x.push_back(p1->val);
          p1=p1->next;
      } 
      int start=0;
      int end=x.size()-1;
      while(start<=end)
	    {
	        if(x[start]!=x[end])
	        {
	            return false;
	        }
	        
	        start++;
	        end--;
	    }
        return true;
    }
};