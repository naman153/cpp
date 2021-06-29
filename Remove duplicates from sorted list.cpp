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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        struct ListNode* temp=head;
        struct ListNode* temp1=head->next;
        
        
        while(temp->next!=NULL){
            if(temp->val == temp1->val){
                temp->next=temp1->next;
                temp1=temp1->next;
            }
                
            else{
                temp=temp->next;
                temp1=temp1->next;
            }
        }
        return head;
    }
};