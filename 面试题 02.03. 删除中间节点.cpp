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
    void deleteNode(ListNode* node) {
        //题目意思为删除node结点
        //时间复杂O(1)，空间复杂度O(1)
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
