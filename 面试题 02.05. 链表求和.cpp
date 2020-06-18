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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //时间复杂度O(max(n,m))，空间复杂度O(max(n,m))
        ListNode *dummy = new ListNode(0);
        ListNode *tmp;
        ListNode *p = dummy;
        int tag = 0, sum = 0;
        while (l1 && l2)
        {
            sum = l1->val + l2->val + tag;
            tmp = new ListNode(sum % 10);
            p->next = tmp;
            p = p->next;
            if (sum / 10 > 0) tag = 1;
            else tag = 0;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            sum = l1->val + tag;
            tmp = new ListNode(sum % 10);
            p->next = tmp;
            p = p->next;
            if (sum / 10 > 0) tag = 1;
            else tag = 0;
            l1 = l1->next;
        }
        while (l2)
        {
            sum = l2->val + tag;
            tmp = new ListNode(sum % 10);
            p->next = tmp;
            p = p->next;
            if (sum / 10 > 0) tag = 1;
            else tag = 0;
            l2 = l2->next;
        }
        if (tag) p->next = new ListNode(1);
        return dummy->next;
    }
};
