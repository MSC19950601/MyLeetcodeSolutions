//leetcode
//Swap Nodes in Pairs
//Easy
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)    return NULL;
        if(head->next == NULL)  return head;
        ListNode* newhead =head->next;
        head->next = swapPairs(head->next->next);
        newhead->next = head;
        
        return newhead;
    }
};