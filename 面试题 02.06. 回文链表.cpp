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
    bool isPalindrome(ListNode* head) {
        //时间复杂度O(n)，空间复杂度O(n)
        int count = 0;
        ListNode *p = head;
        while (p) 
        {
            count++;
            p = p->next;
        }
        vector<int> vec = vector<int>(count, 0);
        p = head;
        for (int i=0; i<count; i++)
        {
            vec[i] = p->val;
            p = p->next;
        }
        for (int i=0; i<count/2; i++)
            if (vec[i] != vec[count-1-i]) return false;
        return true;
    }
};
