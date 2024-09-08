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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* cur = head;
        int sz = 0;
        while(cur){
            sz++;
            cur = cur->next;
        }
        cur = head;
        int parts = sz/k; 
        int extra = sz%k;
        vector<ListNode*> ans(k,nullptr);
        ListNode* newhead = head;
        ListNode* tmp = nullptr;
        // 1 2 3 4 5 6 7 8 9 10
        for(int i=0; i<k; i++){
            ans[i] = newhead;
            for(int j=0; j<parts+(extra>0); j++){
                tmp = newhead;
                newhead = newhead->next;
            }
            if(tmp) tmp->next = nullptr;
            extra--;
        }
        return ans;
    }
};