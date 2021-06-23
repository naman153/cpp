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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode* temp1;
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        else{
            temp1=l1;
            vector<int> temp={};
            while(temp1!=nullptr){
                temp.push_back(temp1->val);
                temp1=temp1->next;
            }
            temp1=l2;
            while(temp1!= nullptr){
                temp.push_back(temp1->val);
                temp1=temp1->next;
            }
            sort(temp.begin(),temp.end());
            struct ListNode* ans= new ListNode(temp[0]);
            temp1=ans;
            for(int i=1;i<temp.size();i++){
                struct ListNode* temp2= new ListNode(temp[i]);
                ans->next=temp2;
                ans=ans->next;
            }
        }
        return temp1;
    }
};
