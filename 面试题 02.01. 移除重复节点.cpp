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
    ListNode* removeDuplicateNodes(ListNode* head) {
        //时间复杂度O(n^2)，空间复杂度O(1)
        ListNode *p = head;
        ListNode *pre, *q;
        while (p)
        {
            pre = p;
            q = pre->next;
            while (q)
            {
                if (q->val == p->val)
                    pre->next = q->next;
                else
                    pre = pre->next;
                q = q->next;
            }
            p = p->next;
        }
        return head;
    }
};
