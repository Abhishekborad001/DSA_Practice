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
    ListNode* middleNode(ListNode* head) {
        ListNode *current = head;
        int cnt =0;
        int iter = 0;
        while(current != nullptr){
            cnt++;
            current = current -> next;
        }
        current = head;
        cnt = cnt/2 ;
        while(iter != cnt){
            iter++;
            current = current -> next;
        }
        return current;
    }
};