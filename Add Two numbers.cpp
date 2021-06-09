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
        while((l1 != nullptr ||  l2 != nullptr)){
            if(l1 != nullptr &&  l2 != nullptr){
                sum=l1->val + l2->val + sum;
                l2->val = sum%10;
                sum=int(sum/10);
                temp=l2;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1 != nullptr &&  l2 == nullptr){
                sum = l1->val + sum;
                l2 = new ListNode(sum%10);
                temp = l2;
                sum=int(sum/10);
                l1=l1->next;
            }
            else if(l1 == nullptr &&  l2 != nullptr){
                sum = l2->val +sum;
                l2->val = sum%10;
                sum=int(sum/10);
                temp = l2;
                l2 = l2->next;
            }
            cout<<temp->val;
        }
        if((l1 == nullptr &&  l2 == nullptr) && sum != 0){
            struct ListNode *temp1 = new ListNode();
            temp1->val = sum%10;
            temp1->next= NULL;
            temp->next = temp1;
            sum=int(sum/10);
        }
        return headl2;
    }
};
