/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        //时间复杂度O(n)，空间复杂度O(n)
        ListNode *dummy1 = new ListNode(0), *dummy2 = new ListNode(0);
        ListNode *p, *tmp;
        ListNode *p1 = dummy1, *p2 = dummy2;
        p = head;
        while (p)
        {
            if (p->val < x)
            {
                tmp = new ListNode(p->val);
                p1->next = tmp;
                p1 = p1->next;
            }
            else
            {
                tmp = new ListNode(p->val);
                p2->next = tmp;
                p2 = p2->next;
            }
            p = p->next;
        }
        p1->next = dummy2->next;
        return dummy1->next;
    }
};
