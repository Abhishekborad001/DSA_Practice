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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;

        int n1=0,n2=0;

        while(t1 != nullptr){
            n1++;
            t1 = t1->next;
        }

        while(t2 != nullptr){
            n2++;
            t2 = t2->next;
        }
        int diff=n1-n2;
        t1 = headA;
        t2 = headB;
        if(diff<0){
            while(diff++ != 0) t2 = t2->next;
        }
        else{
            while(diff-- != 0) t1 = t1->next;
        }

        while(t1 != nullptr){
            if(t1==t2) return t1;
            t2 = t2->next;
            t1 = t1->next;
        }

        return nullptr;

    }
};