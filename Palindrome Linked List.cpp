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
    bool isPalindrome(ListNode* head) {
        if(!head)
            return 1;
        vector<int> ans={};
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=ans[ans.size()-(i+1)]){
                cout<<ans[i]<<" "<<ans[ans.size()-(1+i)];
                return 0;
            }
        }
        return 1;
    }
};
