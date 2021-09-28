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
        ListNode* temp1=head;
        ListNode* temp2=head;
        if(temp1->next==NULL){
            return temp1;
        }
        else if(temp1->next->next==NULL){
            return temp1->next;
        }
        
        while(temp2->next && temp2->next->next){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        if(temp2->next){
            return temp1->next;
        }
        else{
            return temp1;
        }
    }
};
