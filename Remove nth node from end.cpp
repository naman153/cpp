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
        int count=0;
        ListNode* temp=head;
        if(!head->next && n==1){
            head=NULL;
            return head;
        }
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n){
            head=head->next;
            return head;
        }
        count=count-n-1;
        temp=head;
        while(count){
            count--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
