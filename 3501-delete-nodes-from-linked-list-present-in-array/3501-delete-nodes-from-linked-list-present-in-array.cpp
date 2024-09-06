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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>fr;
        for(auto i : nums) fr[i]++;
        
        while(head != nullptr && fr[head->val]){
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        if(head == nullptr) return nullptr;
        ListNode* cur = head;
        while(cur->next != nullptr){
            if(fr[cur->next->val]){
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
            }
            else{
                cur = cur->next;
            }
        }
        return head;
    }
};