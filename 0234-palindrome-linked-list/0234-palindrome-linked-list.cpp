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
private:
    ListNode* reverseLL(ListNode *head)
    {
        ListNode* temp = head;      
        ListNode* prev = NULL;     
        while(temp != NULL){             
            ListNode* front = temp->next;  
            temp->next = prev;  
            prev = temp;  
            temp = front; 
        }
        return prev;  
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast =head;

        if(head->next == nullptr || head== nullptr) return true;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newhead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* sec = newhead;

        while(sec != nullptr){
            if(first->val != sec->val){
                reverseLL(newhead);
                return false;
            }
            first = first->next;
            sec = sec->next;
        }

        reverseLL(newhead);
        return true;
        

    }
};