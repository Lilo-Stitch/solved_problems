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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //if one number is zero return another
        if (l1->val == 0 && !l1->next) return l2;
        if (l2->val == 0 && !l2->next) return l1;
        int rem = 0;
        ListNode* ans = l1;
        ListNode* prev = NULL;
        //logic here is that I change only l1
        while (l1 || l2) {
            // I sum up l1 + l2 if there are not NULL + remainder
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0)  + rem;
            // if l1 is NULL i connect l1 with l2 and make l2 NULL
            if (!l1)  {prev->next = l2; l1=l2; l2= NULL;}
            l1->val = sum%10;
            rem = (sum < 10 ? 0 : 1);
            prev = l1;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        // if remainder at the end is 1 I add one node with value 1;
        if (rem == 1) {
            ListNode* n = new ListNode;
            n->val = 1;
            n->next = NULL;
            prev->next = n;
        }
        return ans;
    }
};
//here the speed is slow only 36 ms
// but the memory is 97% better than others, because i do not create new array;
