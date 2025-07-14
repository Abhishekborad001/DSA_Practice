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
    bool hasCycle(ListNode *head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        if(t1 == nullptr) return false;
        if(t1->next == nullptr) return false;
        if(t1->next == t1->next->next) return true;

        while(t2 != nullptr && t2->next != nullptr){
            t1 = t1->next;
            t2 = t2->next->next;

            if(t1 == t2) return true;
        }

        return false;

        
    }
};