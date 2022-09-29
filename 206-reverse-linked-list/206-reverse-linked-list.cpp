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
    ListNode* reverseList(ListNode* head) {
        ListNode* x=NULL,*y=NULL;
        while(head!=NULL)
        {
            x=y;
            y=head;
            head=head->next;
            y->next=x;
        }
       return y;
    }
        
    
};