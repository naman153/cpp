/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* temp1=headB;
        if(!headA || !headB)
            return NULL;
        
        int m=0,n=0;
        while(temp!=NULL || temp1!=NULL){
            if(temp!=NULL){
                m++;
                temp=temp->next;
            }
            if(temp1!=NULL){
                n++;
                temp1=temp1->next;
            }
        }
        int diff=abs(m-n);
        if(m>n){
            temp=headA;
            temp1=headB;
        }
        else{
            temp=headB;
            temp1=headA;
        }
        for(diff;diff>0;diff--){
            temp=temp->next;
        }
        while(temp!=NULL || temp1!=NULL){
            if(temp==temp1){
                return temp;
            }
            if(temp!=NULL){
                m++;
                temp=temp->next;
            }
            if(temp1!=NULL){
                n++;
                temp1=temp1->next;
            }
        }
        return NULL;
    }
};
