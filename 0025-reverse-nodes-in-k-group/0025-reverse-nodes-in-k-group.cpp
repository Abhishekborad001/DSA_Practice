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
    ListNode* getkthnode(ListNode* temp,int k){
        k-=1;
        while(temp != nullptr && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* previous = nullptr;
        while(temp != nullptr){
            ListNode* k_node = getkthnode(temp,k);
            if(k_node == nullptr){
                if(previous) previous->next = temp;
                break;
            }
            ListNode* nextnode = k_node->next;
            k_node->next = nullptr;
            reverseLL(temp);
            if(temp == head){
                head = k_node;
            }
            else{
                previous ->next = k_node;
            }
            previous = temp;
            temp = nextnode;
        }
        return head;
    }
};