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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafs1;
        vector<int>leafs2;
        getleafs(root1, leafs1);
        getleafs(root2, leafs2);

        if(leafs1.size() != leafs2.size()) return false;
        for(int i=0; i<leafs1.size(); i++){
            cout << leafs1[i] << leafs2[i] << "\n";
            if(leafs1[i] != leafs2[i]) return false;
        }
        return true;
    }
    void getleafs(TreeNode* root, vector<int>&leafs){
        if(root == nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            leafs.push_back(root->val);
        }
        getleafs(root->left,leafs);
        getleafs(root->right,leafs);
    }
};