/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int cnt = 0;
public:
    int goodNodes(TreeNode* root) {
        int ma = root->val;
        count(root, ma);
        return cnt;        
    }
    void count(TreeNode* root, int ma){
        if(root == nullptr){
            return;
        }
        if(root->val >= ma){
            cnt++;
            ma = root->val;
        }
        count(root->right, ma);
        count(root->left, ma);
    }
};