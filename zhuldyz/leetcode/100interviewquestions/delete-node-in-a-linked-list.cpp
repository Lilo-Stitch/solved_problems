/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 // the logic here is to copy and past the values after the node, that we need to delete, and delete the last node.
 // it is not delete(node), but delete node
 // also we need to appoint the next pointer to null before to delete the node that the next pointer is pointing to, otherwise it would show the error.
 // faster than 95.71 percent
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = node;
        while(node->next != NULL) {
            node->val = node->next->val;
             prev= node;
            node = node->next;
        }
        prev->next = NULL;
        delete node;
    }
};
