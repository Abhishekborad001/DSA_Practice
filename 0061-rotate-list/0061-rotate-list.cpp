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
        ListNode* temp = head;
        int len=0;
        if(k==0 || !head || !head->next) return head;

        while(temp!= nullptr){
            len++;
            temp = temp->next;
        }
        k = k%len;
        if(k==0 ) return head;
        
        while(k--){
            ListNode* nextp=head;
            while(nextp->next && nextp->next->next){
                nextp = nextp->next;                
            }

            ListNode* last = nextp->next;
            nextp->next = nullptr;

            last->next = head;
            head = last;
            
        }
        return head;
    }
};