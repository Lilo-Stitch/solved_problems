//Accepted
// Two pointers
// Time compelxity O(n)
// Space complexity O(1)
ListNode<int> * removeKFromList(ListNode<int> * l, int k) { 
        if (l== NULL) return NULL;
        ListNode<int>* temp = l;
        ListNode<int>* prev = NULL;
        while(temp != NULL) {
            if(l->value == k) {
                if(l->next != NULL) l = temp->next;
                else {l = NULL; break;}
                temp->next = NULL;
                temp = l;
                continue;
            }
            if(temp->value== k && prev!= NULL) {
                if(temp->next != NULL) prev->next = temp->next;
                else {prev->next = NULL; break; }
                temp->next = NULL;
                temp = prev->next;
            } else {
                 prev= temp;
                 temp = temp->next;
            }    
           
        }
        return l;
    
}
