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
 
 /*
 Runtime: 8 ms, faster than 86.63% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 15.3 MB, less than 23.79% of C++ online submissions for Merge Two Sorted Lists.

*/
// So kinda i re-write here some code, so because of that my memory sucks.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //recursive
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head = NULL;
        while(l1 && l2) {
            if(l1->val >= l2->val) {
                if(!head) head = l2;
                while(l2->next && l2->next->val <= l1->val) {
                    l2 = l2->next;
                }
                ListNode* fol = l2->next;
                l2->next = l1;
                l2 = fol;
            }
            else {
                if(!head) head = l1;
                while(l1->next && l1->next->val <= l2->val) {
                    l1 = l1->next;
                }
                ListNode* fol = l1->next;
                l1->next = l2;
                l1 = fol;
            } 
        }
        return head;
    }
};
