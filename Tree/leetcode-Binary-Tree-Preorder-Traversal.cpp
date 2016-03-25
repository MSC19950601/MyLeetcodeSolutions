//leetcode
//Binary Tree Preorder Traversal
//Medium
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)    return vector<int>();
        vector<int> res;
        preOrder(root,res);
        return res;
    }
    
    void preOrder(TreeNode* root,vector<int> &res){
        if(!root)   return;
        res.push_back(root->val);
        preOrder(root->left,res);
        preOrder(root->right,res);
    }
};