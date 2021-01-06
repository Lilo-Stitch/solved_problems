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
 // So this code I made fol Node which I do not need, so it is 50% of speed comapring others and also break; statement makes programm slower
 // But this programm consumes less memory, 70% takes less memory than others. so

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        ListNode* curr =head;
        ListNode* prev = NULL;
        while(curr) {
            ListNode* fol = curr->next;
             //  make sure your node is not null before comparing its value;
            if(fol && fol->val == curr->val) {
                int k = curr->val;
                while(curr->val == k) {
                    curr= curr->next;
                    if (!curr) break;
                } 
                if(!prev) head= curr;
                else prev->next = curr;
            } else 
            {
            prev = curr;
            curr = fol; 
            }
        }
        return head;
        
    }
}; */

// This is a rewritten code , it is 90% of speed, but here I use more memory to take curr->next it's 30% smaller than others

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        ListNode* curr =head;
        ListNode* prev = NULL;
        while(curr) {
            if(curr->next && curr->next->val == curr->val) {
                int k = curr->val;
                while(curr && curr->val == k) {
                    curr= curr->next;
                } 
                if(!prev) head= curr;
                else prev->next = curr;
            } else 
            {
            prev = curr;
            curr = curr->next; 
            }
        }
        return head;
        
    }
};

