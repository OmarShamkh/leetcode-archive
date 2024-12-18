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
public:
    int maxLevelSum(TreeNode* root) {
        if(root == nullptr) return 0;
        int level = 0, ans = 0, maxsum = INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            level++;
            int n = q.size(), sum = 0;
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum > maxsum){
                maxsum = sum;
                ans = level;
            }
        }
        return ans;
    }
};