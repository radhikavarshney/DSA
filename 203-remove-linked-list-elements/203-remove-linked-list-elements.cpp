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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr1=head, *curr2=head;
        if(head==NULL)
            return NULL;
        while(curr1)
        {
            if(curr1->val==val)
            {
                if(curr1==head)
                {
                    head=head->next;
                    curr1=curr1->next;
                }
                else
                {
                    if(curr2->next!=curr1)
                    {
                        curr2=curr2->next;
                    }
                    else
                    {
                        curr2->next=curr1->next;
                        curr1=curr1->next;
                    }
                }
            }
            else
            {
                curr1=curr1->next;
            }
        }
        return head;
        
    }
};