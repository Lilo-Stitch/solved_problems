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
 /* TLE, but i dont know why
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        ListNode* change = head;
        ListNode* store = head;
        while (head->next != NULL) {
            change = head->next;
            if (change -> next != NULL) store = change->next;
            head->next = NULL;
            change->next = head;
            head= change;
        }
       return store;
    }
};
*/ 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head ||!(head->next)   ) return head;
     
        
        ListNode* curr = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return curr;
    }


