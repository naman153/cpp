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
    int getDecimalValue(ListNode* head) {
        vector<bool> array = {};
        while(head != nullptr){
            array.push_back(head->val);
            head = head->next;
        }
        int res = 0;
        for(int i=array.size()-1; i>=0; i--){
            
            if(array[i] == 1)
                res += pow(2, array.size()-i-1);
                
        }
        array.clear();
        return res;
    }
};
