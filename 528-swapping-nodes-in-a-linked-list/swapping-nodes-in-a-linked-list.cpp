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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* ptr = head;

        int size=0;
        int count=1;
        while(ptr!=NULL)
        {
            size++;
            ptr=ptr->next;
        }

        while(count<k)
        {
            ptr1=ptr1->next;
            count++;
        }
        int back=size-k+1;
        count=1;

        while(count<back)
        {
            ptr2=ptr2->next;
            count++;
        }
        swap(ptr1->val, ptr2->val);

        return head;
    }
};
