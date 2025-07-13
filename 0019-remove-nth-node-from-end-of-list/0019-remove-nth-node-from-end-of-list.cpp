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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* current = head;
        while(current!= nullptr){
            cnt++;
            current = current->next;
        }

        if(cnt==n){
           ListNode* newhead = head->next;
           delete head;
           return newhead;
        }
        int target = cnt-n;
        current = head;

        while(--target){
            current = current->next;
        }
       
        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
        
        return head;
    }
};