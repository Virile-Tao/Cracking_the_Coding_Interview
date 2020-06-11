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
    int kthToLast(ListNode* head, int k) {
        //时间复杂度O(n)，空间复杂度O(1)
        ListNode *p = head, *q = head;
        while (--k)
        {
            q = q->next;
        }
        while (q->next)
        {
            p = p->next;
            q = q->next;
        }
        return p->val;
    }
};
