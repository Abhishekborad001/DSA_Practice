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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* last = head;

        if(!head || !head->next || k==0) return head;
        while(last->next != nullptr) {
            last = last->next;
        }
        last->next = head;

        while(k--){
            fast = fast->next;
        }

        while(fast != slow){
            slow = slow->next;
            fast = fast->next->next;
            last = last->next;
        }
        last->next = nullptr;

        return slow;

    }  
};