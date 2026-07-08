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
    void inorder(TreeNode* root,vector<int>& num){
        if(root==NULL)return;
        inorder(root->left,num);
        num.push_back(root->val);
        inorder(root->right,num);
    }
    int kthSmallest(TreeNode* root, int k) {
         if(root==NULL)return 0;
        vector<int>num;
        inorder(root,num);
        return num[k-1];

    }
};