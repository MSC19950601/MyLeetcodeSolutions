//leetcode
//Binary Tree Inorder Traversal
//Easy
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root){
            return res;
        } 
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode *pNode = s.top();
            if(pNode->left){
                s.push(pNode->left);
                pNode->left = NULL;
            }else{
                res.push_back(pNode->val);
                s.pop();
                if(pNode->right){
                    s.push(pNode->right);
                }
            }
        }
        return res;
    }
};