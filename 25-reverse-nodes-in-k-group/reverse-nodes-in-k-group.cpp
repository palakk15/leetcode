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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;

        ListNode* prev=&dummy;
        while(true)
        {
            ListNode* kth=prev;
            for(int i=0;i<k && kth;i++)
            {
                kth=kth->next;
            }
            if(!kth)
            break;

            ListNode* next=kth->next;
            ListNode* curr=prev->next;
            ListNode* p=next;

            while(curr!=next)
            {
                ListNode* temp=curr->next;
                curr->next=p;
                p=curr;
                curr=temp;
            }
            ListNode* temp=prev->next;
            prev->next=kth;
            prev=temp;
        }
        return dummy.next;
    }
};