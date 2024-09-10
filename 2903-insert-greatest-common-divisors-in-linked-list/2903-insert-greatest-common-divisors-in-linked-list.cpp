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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* left = head;
        ListNode* right = head->next;
        while(right){
            int gcd = GCD(left->val , right->val);
            ListNode* node = new ListNode(gcd);
            left->next = node;
            node->next = right;

            left = right;
            right = right->next;
        }
        return head;
    }
    int GCD(int a, int b){
        return (b == 0 ? a : GCD(b, a%b));
    }
};