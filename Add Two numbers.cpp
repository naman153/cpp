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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp;
        ListNode *headl2 = l2;
        int sum=0;
        while((l1 != nullptr ||  headl2 != nullptr)){
            if(l1 != nullptr &&  headl2 != nullptr){
                sum=l1->val + headl2->val + sum;
                headl2->val = sum%10;
                sum=int(sum/10);
                l1=l1->next;
                if(headl2->next == nullptr)
                    temp=headl2;
                headl2=headl2->next;
            }
            else if(l1 != nullptr &&  headl2 == nullptr){
                sum = l1->val + sum;
                temp->next = l1;
                temp->next->val= sum%10;
                sum=int(sum/10);
                temp=temp->next;
                l1=l1->next;
            }
            else if(l1 == nullptr &&  headl2 != nullptr){
                sum = headl2->val +sum;
                headl2->val = sum%10;
                sum=int(sum/10);
                if(headl2->next == nullptr)
                    temp = headl2;
                headl2 = headl2->next;
            }
        }
        if((l1 == nullptr &&  headl2 == nullptr) && sum != 0){
            struct ListNode *temp1 = new ListNode();
            temp1->val = sum%10;
            temp1->next= NULL;
            temp->next = temp1;
            sum=int(sum/10);
        }
        return l2;
    }
};
