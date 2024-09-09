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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
            
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        
        ListNode* current = head;
        
        while (top <= bottom && left <= right && current != nullptr) {
            for (int i = left; i <= right && current != nullptr; ++i) {
                ans[top][i] = current->val;
                current = current->next;
            }
            top++;
            
            for (int i = top; i <= bottom && current != nullptr; ++i) {
                ans[i][right] = current->val;
                current = current->next;
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left && current != nullptr; --i) {
                    ans[bottom][i] = current->val;
                    current = current->next;
                }
                bottom--; 
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top && current != nullptr; --i) {
                    ans[i][left] = current->val;
                    current = current->next;
                }
                left++; 
            }
        }
        
        return ans;
    }
};