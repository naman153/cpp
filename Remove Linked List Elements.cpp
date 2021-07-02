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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        ListNode* head1=head;
        ListNode* temp = head->next;
        while(temp != NULL){
            if(temp->val== val){
                if(temp->next){
                    head1->next=temp->next;
                }
                else
                    head1->next = nullptr;
                
                temp=temp->next;
            }
            else{
                head1=head1->next;
                temp=temp->next;
            }
        }
        if(head->val==val){
            head=head->next;
        }
        return head;
        
    }
};
